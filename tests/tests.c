/*
** EPITECH PROJECT, 2021
** C-Strlib
** File description:
** tests
*/

#include <criterion/criterion.h>
#include "../mystr.h"

//------------------------------------------------------ TESTS STR TO DOUBLE --------------------------------------------------------//

Test(test_str_to_double, normal)
{
    char *str = "10.0";
    double d = str_to_double(str);
    cr_assert_eq(d, 10.0);
}

Test(test_str_to_double, normal_o_before)
{
    char *str = "04.0";
    double d = str_to_double(str);
    cr_assert_eq(d, 4.0);
}

Test(test_str_to_double, coma)
{
    char *str = "10.123";
    double d = str_to_double(str);
    cr_assert_eq(d, 10.123);
}

Test(test_str_to_double, coma_o_before)
{
    char *str = "05.123";
    double d = str_to_double(str);
    cr_assert_eq(d, 5.123);
}

Test(test_str_to_double, coma_with_negative)
{
    char *str = "-13.123";
    double d = str_to_double(str);
    cr_assert_eq(d, -13.123);
}

Test(test_str_to_double, coma_with_o_negative)
{
    char *str = "-023.123";
    double d = str_to_double(str);
    cr_assert_eq(d, -23.123);
}

Test(test_str_to_double, negative)
{
    char *str = "-10.123";
    double d = str_to_double(str);
    cr_assert_eq(d, -10.123);
}

Test(test_str_to_double, str_null)
{
    char *str = NULL;
    double d = str_to_double(str);
    cr_assert_eq(d, 0.0);
}

//------------------------------------------------------ TESTS DOUBLE TO STR --------------------------------------------------------//

Test(test_double_to_str, simple_precision1)
{
    double d = 2.0;
    char *str = double_to_str(d, 1);
    cr_assert_str_eq(str, "2.0");
    free(str);
}

Test(test_double_to_str, simple_precision2)
{
    double d = 2.12;
    char *str = double_to_str(d, 2);
    cr_assert_str_eq(str, "2.12");
    free(str);
}

Test(test_double_to_str, simple_precision3)
{
    double d = 17.2345;
    char *str = double_to_str(d, 3);
    cr_assert_str_eq(str, "17.235");
    free(str);
}

//------------------------------------------------------ TESTS GET WORDS --------------------------------------------------------//

Test(test_get_word, simple)
{
    char *str = "Bonjour je suis francais";
    char **words = get_words(str);
    cr_assert_str_eq(words[0], "Bonjour");
    cr_assert_str_eq(words[1], "je");
    cr_assert_str_eq(words[2], "suis");
    cr_assert_str_eq(words[3], "francais");
    free_split(words);
}

Test(test_get_word, simple_ponctuation)
{
    char *str = "Bonjour je m'appelle Benjamin";
    char **words = get_words(str);
    cr_assert_str_eq(words[0], "Bonjour");
    cr_assert_str_eq(words[1], "je");
    cr_assert_str_eq(words[2], "m");
    cr_assert_str_eq(words[3], "appelle");
    cr_assert_str_eq(words[4], "Benjamin");
    free_split(words);
}

Test(test_get_word, simple_tabs)
{
    char *str = "Bonjour\tje suis francais";
    char **words = get_words(str);
    cr_assert_str_eq(words[0], "Bonjour");
    cr_assert_str_eq(words[1], "je");
    cr_assert_str_eq(words[2], "suis");
    cr_assert_str_eq(words[3], "francais");
    free_split(words);
}

Test(test_get_word, simple_tabs_ponctuation)
{
    char *str = "Bonjour je\tm'appelle Benjamin";
    char **words = get_words(str);
    cr_assert_str_eq(words[0], "Bonjour");
    cr_assert_str_eq(words[1], "je");
    cr_assert_str_eq(words[2], "m");
    cr_assert_str_eq(words[3], "appelle");
    cr_assert_str_eq(words[4], "Benjamin");
    free_split(words);
}

Test(test_get_word, extrem1)
{
    char *str = "Bonjour   \t\t je\tm'appelle\t\t\t    Benjamin \t";
    char **words = get_words(str);
    cr_assert_str_eq(words[0], "Bonjour");
    cr_assert_str_eq(words[1], "je");
    cr_assert_str_eq(words[2], "m");
    cr_assert_str_eq(words[3], "appelle");
    cr_assert_str_eq(words[4], "Benjamin");
    free_split(words);
}

//------------------------------------------------------ TESTS SPLIT STR --------------------------------------------------------//

Test(test_split_str, simple)
{
    char *str = "je\nsuis là\npour\nvous";
    char **split = split_str(str, '\n');
    cr_assert_eq(lenght_split(split), 4);
    cr_assert_str_eq(split[0], "je");
    cr_assert_str_eq(split[1], "suis là");
    cr_assert_str_eq(split[2], "pour");
    cr_assert_str_eq(split[3], "vous");
    free_split(split);
}

Test(test_split_str, simple_two)
{
    char *str = "je\nsuis là\npour\nvous";
    char **split = split_str(str, ' ');
    cr_assert_eq(lenght_split(split), 2);
    cr_assert_str_eq(split[0], "je\nsuis");
    cr_assert_str_eq(split[1], "là\npour\nvous");
    free_split(split);
}

Test(test_split_str, medium)
{
    char *str = "je\nsuis là\n\npour\nvous";
    char **split = split_str(str, '\n');
    cr_assert_eq(lenght_split(split), 5);
    cr_assert_str_eq(split[0], "je");
    cr_assert_str_eq(split[1], "suis là");
    cr_assert_str_eq(split[2], "");
    cr_assert_str_eq(split[3], "pour");
    cr_assert_str_eq(split[4], "vous");
    free_split(split);
}

Test(test_split_str, hard)
{
    char *str = "je\nsuis là\npour\nvous\n";
    char **split = split_str(str, '\n');
    cr_assert_eq(lenght_split(split), 4);
    cr_assert_str_eq(split[0], "je");
    cr_assert_str_eq(split[1], "suis là");
    cr_assert_str_eq(split[2], "pour");
    cr_assert_str_eq(split[3], "vous");
    free_split(split);
}

//------------------------------------------------------ TESTS CONCAT STR --------------------------------------------------------//

Test(test_concat_str, simple)
{
    char *str1 = "Yo moi ";
    char *str2 = "c'est Benjamin";
    char *res = concat_str(str1, str2);
    cr_assert_str_eq(res, "Yo moi c'est Benjamin");
    free(res);
}

Test(test_concat_str, null_first)
{
    char *str1 = NULL;
    char *str2 = "c'est Benjamin";
    char *res = concat_str(str1, str2);
    cr_assert_str_eq(res, "c'est Benjamin");
    free(res);
}

Test(test_concat_str, null_second)
{
    char *str1 = "Yo moi ";
    char *str2 = NULL;
    char *res = concat_str(str1, str2);
    cr_assert_str_eq(res, "Yo moi ");
    free(res);
}

