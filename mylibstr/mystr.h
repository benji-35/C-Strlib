/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** mystr
*/

#ifndef MYSTR_H_
#define MYSTR_H_

int lenght(char *str);
int finish_with(char *str1, char *str2);
int str_equality(char *str1, char *str2);
char **split_str(char *str, char spliter);
int str_contains(char *str1, char *contain);
int strat_with(char *str1, char *str2);
char *copy_str(char *str);
void str_to_lower_case(char *str);
void str_to_upper_case(char *str);
char *concat_str(char *str1, char *str2);
char *int_to_str(int nb);
int str_to_int(unsigned char *str);
char **get_words(char *str);
int lenght_split(char **split);
void free_split(char **split);
char **get_world(char *str);
void insert_char_str(char **str, int position, char c);
int str_char_occur(char *str, char c);
void str_rm_fchar(char **str, char c);
void str_rm_occhar(char **str, char c);
int is_alphanumeric(char c);
char *empty_str(void);
char *double_to_str(double f, int precision);
double str_to_double(char *str);
void reverse_str(char **str);
void add_line_text(char ***text, int pos);
void add_str_text(char ***text, int pos, char *str);
void remove_line_text(char ***text, int pos);

#endif /* !MYSTR_H_ */
