/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** mystr
*/

#ifndef MYSTR_H_
#define MYSTR_H_

typedef char** text;
typedef char* string;

int lenght(string str);
int finish_with(string str1, string str2);
int str_equality(string str1, string str2);
text split_str(string str, char spliter);
int str_contains(string str1, string contain);
int strat_with(string str1, string str2);
string copy_str(string str);
void str_to_lower_case(string str);
void str_to_upper_case(string str);
string concat_str(string str1, string str2);
string int_to_str(int nb);
int str_to_int(string str);
text get_words(string str);
int lenght_split(text split);
void free_split(text split);
text get_world(string str);
void insert_char_str(string *str, int position, char c);
int str_char_occur(string str, char c);
void str_rm_fochar(string *str, char c);
void str_rm_occhar(string *str, char c);
int is_alphanumeric(char c);
string empty_str(void);
string double_to_str(double f, int precision);
double str_to_double(string str);
void reverse_str(string *str);
void add_line_ptext(text *txt, int pos);
void add_line_text(text *txt);
void add_str_text(text *txt, int pos, string str);
void remove_line_text(text *txt, int pos);
void remove_line_text_string(text *txt, string str);
void add_char_str(string *str, char c);
int str_contain_pos(string str1, string contain);
void str_rm_fchar(string *str);
void str_rm_pchar(string *str, int pos);
void remove_all_ostr_text(text txt, string str);
void replace_char_text(text txt, char target, char replace);
void replace_char_str(string str, char target, char replace);
string text_to_str(text split, string separator);
void insert_str_s(string *str, string to_insert, int pos);

#endif /* !MYSTR_H_ */
