# C-Strlib
Librairie sur les chaînes de caractères

# LISTE DES FONCTIONS
Listes des fonctions et à quoi elles servent:

- string concat_str(string str1, string str2) -> Permet d'ajouter la str2 dans la str1 et retourne le resultat.

- int contain_str(string str1, string contain) -> Permet de vérifier si dans la chaîne de caractère str1 il y a la chaîne de caractère contain. retourne 1 si vrai ou 0 si faux.

- string copy_str(string str) -> retourne une nouvelle string ayant le même contenue que la string en paramètre.

- string copy_str_fp(string str, int pos) -> Retourne la copie de la string "str" depuis la position pos. Si jamais la position dans la string est supérieur à sa taille, la fonctione retourne NULL.

- string copy_str_tp(string str, int pos) -> Retroune la copie de la string "str" du début a la position pos. Si la position est inférieur ou égale à 0 alors la fonction retourne NULL. Si la position est supérieur à la taille de la string alors la fonction retournera la copie de la string totale.

- int str_equality(string str1, string str2) -> retourne 1 si les 2 strings sont exactement pareil. retourne 0 si ce n'est pas le cas.

- int finish_with(string str1, string str2) -> retourne 1 si la string 1 finit par la string 2.

- void insert_char_str(string *str, int position, char c) -> insert un char par rapport à une position dans la string (pointeur sur la string est demandé en argument). Si jamais la position est supérieur à la taille de la string alors aucun changement n'est effectué.

- string int_to_str(int nb) -> Transforme un int en string et retourne le string.

- void inverse_str(string *str) -> Permet d'inverser une string (pointeur sur une string en argument).

- int lenght(string str) -> permet de connaitre la taille d'une string et retourne sa valeur. Si la string est NULL alors la fonction retourne 0.

- int str_char_occur(string str, char c) -> Compte le nombre d'occurence d'un char dans une string et retourne le résultat. Si la string est NULL alors la fonction retourne 0.

- void str_rm_fochar(string *str, char c) -> Supprime la première occurence d'un char dans une string (pointeur sur la string est demandé en argument).

- void str_rm_occhar(string *str, char c) -> Supprime toutes les occurences d'un char dans une string (pointeur sur la string est demandé en argument).

- text split_str(string str, char spliter) -> Split une string par rapport à un char "splitter" et retourne un tableau de string avec toutes les strings entre ce splitter. Si une string est NULL alors la fonction renvoie NULL.

- string split_to_str(text split, string separator) -> Transforme le split ou un text en un string. La fonction retourne la string. Separator permet d'ajouter un string ou un char (sous forme de string) entre les lignes. Exemple : "\n" va permettre de séparer toutes les lignes par un \n.

- int strat_with(string str1, string str2) -> Retourne 1 si la string 1 commence par la string 2

- text get_words(string str) -> Retourne une liste de string dans lequel se trouve tout les mots d'une string.

- int str_to_int(unsigned string str) -> Change une string en int. La fonction retourne les résultat

- void str_to_upper_case(string str) -> Transforme les lettre minuscule d'une string en lettre majuscule

- void str_to_lower_case(string str) -> Transforme les lettre majuscule d'une string en lettre minuscule

- void free_split(text split) -> Vide le split de la mémoire

- string empty_str(void) -> Retourne une string vide

- string empty_str_size(int size) -> Retourne une string vide avec une taille donnée

- string double_to_str(double f, int precision) -> Retourne un double en string avec un nombre définie de chiffre après la virgule (int precision entre 0 et 7)

- void add_line_ptext(text *txt, int pos) -> Ajoute une ligne dans un texte (text) à la position donné. si la position est supérieure à la taille du text alors la ligne sera rajouté à la fin. Si la position est inférieur à 0 alors la ligne sera ajouté au début

- void add_line_text(text *txt) -> Ajoute une ligne à la fin du texte (text).

- void add_str_text(text *txt, int pos, string str) -> Appelle la fonction add_line_text et ajoute la string à la position indiquée.

- void remove_line_text(text *txt, int pos) -> Supprime une ligne du texte depuis la position donnée. Elle free la string à cette position.

- void remove_line_text_string(text *txt, string str) -> Supprime toutes les lignes du text qui contiennent la string str

- void add_char_str(string *str, char c) -> Ajout d'un char "c" à la fin de la string "str" (pointeur sur la string)

- void add_char_strp(string *str, char c, int pos) -> Ajout d'un char "c" à la position "pos" dans la string "str" (pointeur sur la string). Si jamais la position est inférieur à 0 alors la position est remise à 0. Si la position est supérieur à la taille de la string alors le char sera ajouté à la fin de la string.

- void remove_char_str(string *str, int pos) -> Suppression d'un char à la position "pos" dans la string "str" (pointeur sur la string). Si la position est inférieur à 0 ou suppérieur à la taille de la string alors aucune modifiactions ne sera effectuées.

- int str_contain_pos(string str1, string contain) -> Retourne la position dans la string "str1" de la string "str2". Si la string "str1" ne contient pas la string "str2" alors la fonction retourne -1.

- void str_rm_fchar(string *str) -> Supprimer le premier caractère de la string str (pointeur de la string).

- void remove_all_ostr_text(text txt, string str) -> Supprimer toutes les occurences d'une string dans un texte.

- void replace_char_text(text txt, char target, char replace) -> remplace toutes les occurences du caractère "target" dans un texte par le caractère "replace".

- void replace_char_str(string str, char target, char replace) -> remplace toutes les occurences du caractère "target" dans une string par le caractère "replace".

- void insert_str_s(string *str, string to_insert, int pos) -> insert une string dans la string actuel par rapport à une position

# INFORMATIONS
Toutes les string ou text doivent être free. La variable de type text peut être free par la fonction free_split(text split). La variable de type string doit être free par la fonction free de la lib stdlib.h