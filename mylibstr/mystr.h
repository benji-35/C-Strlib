/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** mystr
*/

#ifndef MYSTR_H_
#define MYSTR_H_

#include <unistd.h>

typedef char** text;
typedef char* string;

/**
 * Calcul size of string
 * @param str > string
 * @return size (int) of the string
 */
int length(string str);

/**
 * Check if str1 finish with str2
 * @param str1 > main string
 * @param str2 > check finish string
 * @return 1 if string str 1 finish with string str2
 * otherwise return 0
 */
int finish_with(string str1, string str2);

/**
 * Check string equality
 * @param str1 > main string
 * @param str2 > check finish string
 * @return 1 if str1 and str2 are equal
 * otherwise return 0
 */
int str_equality(string str1, string str2);

/**
 * Split string by occurence of splitter
 * @param str1 > string
 * @param splitter > char that can split the string
 * @return text by spliting string
 */
text split_str(string str, char spliter);

/**
 * Check str1 contain the string "contain"
 * @param str1 > string
 * @param contain > string containing in str1
 * @return 1 if string str1 contain string contain
 * othewise return 0
 */
int str_contains(string str1, string contain);

/**
 * Check if str1 start with str2
 * @param str1 > main string
 * @param str2 > check finish string
 * @return 1 if string str 1 start with string str2
 * otherwise return 0
 */
int strat_with(string str1, string str2);

/**
 * Copy string
 * @param str > main string
 * @return the copy of str
 */
string copy_str(string str);

/**
 * Chnage all upper case to lower case in string
 * @param str > string
 */
void str_to_lower_case(string str);

/**
 * Chnage all lower case to upper case in string
 * @param str > string
 */
void str_to_upper_case(string str);

/**
 * Put string 2 after string 1 and stock it in new string
 * @param str1 > first string
 * @param str2 > second string
 * @return String with str1 and str2 in same string
 */
string concat_str(string str1, string str2);

/**
 * int to str
 * @param nb > int value
 * @return String with int value of nb
 */
string int_to_str(int nb);

/**
 * str to int
 * @param str > int value in str
 * @return int with int value in str
 * if str does not contain int value, function return 0
 */
int str_to_int(string str);

/**
 * get words of string
 * @param str > int value in str
 * @return text that list every words in str
 */
text get_words(string str);

/**
 * get size of text
 * @param split > text type
 * @return size of text
 */
int length_text(text split);

/**
 * free text
 * @param split > text type
 */
void free_text(text split);

/**
 * add char in str at specific position
 * @param str > string pointer
 * @param position > position in str
 * @param c > char to insert
 */
void insert_char_str(string *str, int position, char c);

/**
 * get number of occurences of char in str
 * @param str > string
 * @param c > char
 * @return nunber of occurences of char
 */
int str_char_occur(string str, char c);

/**
 * remove first occurence of char in str
 * @param str > string pointer
 * @param c > char
 */
void str_rm_fochar(string *str, char c);

/**
 * remove all occurences of char in str
 * @param str > string pointer
 * @param c > char
 */
void str_rm_occhar(string *str, char c);

/**
 * check if char is alphanumeric or not
 * @param c > char
 * @return 1 if char is alphanumeric
 * 0 if char is not alphanumeric
 */
int is_alphanumeric(char c);

/**
 * create empty string
 * @return string with only \0
 */
string empty_str(void);

/**
 * put double in str
 * @param f > double
 * @param precision > nb digits after coma
 * @return string that contain double
 */
string double_to_str(double f, int precision);

/**
 * change string to double
 * @param str > string thaht contain double
 * @return double
 */
double str_to_double(string str);

/**
 * reverse the string
 * @param str > string pointer
 */
void reverse_str(string *str);

/**
 * add new line with str in text at specific line
 * @param txt > text pointer
 * @param pos > line in text
 */
void add_line_ptext(text *txt, int pos);

/**
 * add empty str in text at end
 * @param txt > text pointer
 */
void add_line_text(text *txt);

/**
 * add str in text at specific line
 * @param txt > text pointer
 * @param str > string
 * @param pos > line in text
 */
void add_str_text(text *txt, int pos, string str);

/**
 * remove line in text
 * @param txt > text pointer
 * @param pos > line in text
 */
void remove_line_text(text *txt, int pos);

/**
 * remove all line that contains str
 * @param txt > text pointer
 * @param str > string
 */
void remove_line_text_string(text *txt, string str);

/**
 * add char at end str
 * @param str > string pointer
 * @param c > char to add
 */
void add_char_str(string *str, char c);

/**
 * add char at end str
 * @param str > check in this str
 * @param contain > check this str
 * @return first position of contain in str
 * if str does not contain contain the return -1
 */
int str_contain_pos(string str1, string contain);

/**
 * remove first char in str
 * @param str > string pointer
 */
void str_rm_fchar(string *str);

/**
 * remove char in str at specific pos
 * @param str > string pointer
 * @param pos > position of char
 */
void str_rm_pchar(string *str, int pos);

/**
 * remove all occurences of string in text
 * @param txt > text
 * @param str > string to remove
 */
void remove_all_ostr_text(text txt, string str);

/**
 * replace char in text
 * @param txt > text
 * @param target > char to replace
 * @param replace > char want
 */
void replace_char_text(text txt, char target, char replace);

/**
 * replace char in string
 * @param str > string
 * @param target > char to replace
 * @param replace > char want
 */
void replace_char_str(string str, char target, char replace);

/**
 * change text to string
 * @param split > text
 * @param separator > string to place between line (Nullable)
 * @return string result
 */
string text_to_str(text split, string separator);

/**
 * insert string "to_insert" in string "str" at specific position
 * @param str > string pointer
 * @param to_insert > string to insert in string str
 * @param pos > position in string
 */
void insert_str_s(string *str, string to_insert, int pos);

/**
 * number of empty line in text
 * @param str > text
 * @return int with number of empty line in text
 */
int nb_o_split(text str);

/**
 * remove all occurences of "to_rem" in string "str"
 * @param str > pointer string
 * @param to_rem > string to remove
 */
void remove_ostr_str(string *str, string to_rem);

/**
 * display string in output 1
 * @param str > string
 */
void my_putstr(string str);

/**
 * display string in output 2
 * @param str > string
 */
void my_putstr_err(string str);

/**
 * display string in specific output
 * @param str > string
 * @param fd > output to display
 */
ssize_t my_putstr_fd(string str, int fd);

/**
 * display text in specific output
 * @param txt > text want to be display
 * @param fd > output to display
 */
void my_puttext(text txt, int fd);

text split_sstr(string str, string splitter);
#endif /* !MYSTR_H_ */
