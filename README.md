# C-Strlib
Librairie complète sur les strings en constante mise à jour pour avoir le plus de fonctions utiles avec une utilisation simplifiée.

# UTILISATION
Étape 1 "Modifier l'emplacement de la lib et du .h à la compilation":
    -Aller dans le makefile
    -Modifier "PATH_LIB" pour l'emplacement de la librairie (.a)
    -Modifier "PATH_HEADER" pour l'emplacement du fichier .h

Étape 2 "Ajouter la lib a la compilation de son projet":
    -Compiler la librairie avec la commande : "make re" dans le dossier mylibstr
    -Ajouter à la commande de compilation : -L "Emplacement de la librairie" -lkapstr

Étape 3 "Appler les fonctions de la librairie":
    -Écrire en haut de votre code #include "mystr.h"
    -Appellez la fonction souhaité

# FUNCTION LIST (ENGLISH VERSION)

| N° |     Name function     |      Arguments      |  Value return  |            description              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
|  1 |     add_char_str      |     string *str    char c|      void      | add a char at the end of string     |
|  2 |     add_char_strp     |     string *str    char c    int pos|      void      | add a char at the end of string at specific position|
|  3 |    remove_char_str    |     string *str    int pos|      void      | remove a caracter at specific position|
|  4 |      add_str_text     |       text *txt    int pos    string str|      void      | insert the string in text at specific line.|
|  5 |     add_line_text     |       text *txt     |      void      | add a new empty line in text        |
|  6 |     add_line_ptext    |       text *txt    int pos|      void      | add new empty line at specific position in text|
|  7 |       nb_o_split      |       text *txt     |       int      | Return the number of \0 in text     |
|  8 |    is_alphanumeric    |        char c       |       int      | Return 1 if char is alphanumeric or 0 it's not an alphanurmeric char|
|  9 |       concat_str      |      string str1    string str2|     string     | Concat string 2 with string 1 and return the result|
| 10 |      str_contains     |      string str    string contain|       int      | Return 1 if str contain the content of contain otherwise it return 0|
| 11 |    str_contain_pos    |      string str    string contain|       int      | Return the position of the first string occurence. if there is no occurence then NULL is return|
| 12 |       copy_str        |      string str     |     string     | Return a copy of string             |
| 13 |      copy_str_fp      |      string str    int pos|     string     | Return a copy of string from a position|
| 14 |      copy_str_tp      |      string str    int pos|     string     | Return a copy of string from the begining to the position|
| 15 |     double_to_str     |       double f    int precision  |     string     | Return a double in string with precision number after coma|
| 16 |       empty_str       |         void        |     string     | Return an empty string with only \0 |
| 17 |     empty_str_size    |       int size      |     string     | Return an empty string with size  give in argument|
| 18 |      str_equality     |     string str1      string str2   |       int      | Return 1 if str1 and str2 are equals|
| 19 |       finish_with     |     string str1      string str2     |       int      | Return 1 if str1 finish with str2   |
| 20 |       free_split      |      text split     |      void      | Free the text                       |
| 21 |    insert_char_str    |      string *str   int position    char c |                | Add a char at the position in the string |
| 22 |      insert_str_s     |      string *str    string to_insert    int pos|      void      | Add a string at the position in the string str |
| 23 |       int_to_str      |        int nb       |     string     | Return int in string                |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 24 |       reverse_str     |      string *str    |      void      | Reverse the string                  |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 25 |        length         |      string str     |       int      | Return string size                  |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 26 |      length_split     |      text split     |       int      | Return text size                    |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 27 |     str_char_occur    |      string str     |       int      | Return number of occurence of char  |
|    |                       |        char c       |                | in string                           |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 28 |      str_rm_occhar    |      string *str    |      void      | Remove all occurence of char in     |
|    |                       |        char c       |                | string                              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 29 |      str_rm_fochar    |      string *str    |      void      | Remove the first accurence of char  |
|    |                       |        char c       |                | in string                           |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 30 |      str_rm_pchar     |      string *str    |      void      | Remove char at position pos in      |
|    |                       |       int pos       |                | string                              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 31 |      str_rm_fchar     |      string *str    |      void      | Remove first char of string         |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 32 |    remove_line_text   |       text *txt     |      void      | Remove line in text at position     |
|    |                       |        int pos      |                |                                     |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 33 |remove_line_text_string|       text *txt     |      void      | Remove all lines with that contain  |
|    |                       |      string str     |                | string                              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 34 |  remove_all_ostr_text |       text txt      |      void      | Remove all same string in text      |
|    |                       |       string str    |                |                                     |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 35 |    remove_ostr_str    |      string *str    |      void      | Remove all same string in string str|
|    |                       |    string to_ren    |                |                                     |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
|    |                       |      string str     |                | Replace all char equals to target in|
| 36 |    replace_char_str   |      char target    |      void      | str to replace value                |
|    |                       |     char replace    |                |                                     |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
|    |                       |       text txt      |                | Replace all char equals to target in|
| 37 |   replace_char_text   |      char target    |      void      | text to replace value               |
|    |                       |     char replace    |                |                                     |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
|    |                       |      string str     |                | Split text for each splitter        |
| 38 |       split_str       |    char splitter    |      text      | position in string and return the   |
|    |                       |                     |                | text splitted                       |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
|    |                       |      text split     |                | From text, a string is generate and |
| 39 |      text_to_str      |   string separator  |     string     | you can put a separator if you want |
|    |                       |                     |                | (separator is nullable)             |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 40 |       strat_with      |      string str1    |       int      | Return 1 if str1 start with str2    |
|    |                       |      string str2    |                | else function return 0              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 41 |       get_words       |       string str    |      text      | Return a list with words of string  |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 42 |    str_to_double      |       string str    |     double     | Return double value from double in  |
|    |                       |                     |                | string                              |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 43 |      str_to_int       |       string str    |       int      | Return int value from int in string |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 44 |   str_to_lower_case   |       string str    |      void      | Change all upper case to lower case |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|
| 45 |   str_to_upper_case   |       string str    |      void      | Change all lower case to upper case |
|:--:|:---------------------:|:-------------------:|:--------------:|:-----------------------------------:|

# INFORMATIONS
Toutes les string ou text doivent être free. La variable de type text peut être free par la fonction free_split(text split). La variable de type string doit être free par la fonction free de la lib stdlib.h