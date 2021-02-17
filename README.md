# C-Strlib
Create my own str lib

# TO-DO
str_get_world

# INFORMATIONS
Listes des fonctions et à quoi elles servent:

- char *concat_str(char *str1, char *str2) -> Permet d'ajouter la str2 dans la str1 et retourne le resultat.

- int contain_str(char *str1, char *contain) -> Permet de vérifier si dans la chaîne de caractère str1 il y a la chaîne de caractère contain. retourne 1 si vrai ou 0 si faux.

- char *copy_str(char *str) -> retourne une nouvelle string ayant le même contenue que la string en paramètre.

- int str_equality(char *str1, char *str2) -> retourne 1 si les 2 strings sont exactement pareil. retourne 0 si ce n'est pas le cas.

- int finish_with(char *str1, char *str2) -> retourne 1 si la string 1 finit par la string 2.

- void insert_char_str(char **str, int position, char c) -> insert un char par rapport à une position dans la string (pointeur sur la string est demandé en argument). Si jamais la position est supérieur à la taille de la string alors aucun changement n'est effectué.

- char *int_to_str(int nb) -> Transforme un int en string et retourne le string.

- void inverse_str(char **str) -> Permet d'inverser une string (pointeur sur une string en argument).

- int lenght(char *str) -> permet de connaitre la taille d'une string et retourne sa valeur. Si la string est NULL alors la fonction retourne 0.

- int str_char_occur(char *str, char c) -> Compte le nombre d'occurence d'un char dans une string et retourne le résultat. Si la string est NULL alors la fonction retourne 0.

- void str_rm_fchar(char **str, char c) -> Supprime la première occurence d'un char dans une string (pointeur sur la string est demandé en argument).

- void str_rm_occhar(char **str, char c) -> Supprime toutes les occurences d'un char dans une string (pointeur sur la string est demandé en argument).

- char **split_str(char *str, char spliter) -> Split une string par rapport à un char "splitter" et retourne un tableau de string avec toutes les strings entre ce splitter. Si une string est NULL alors la fonction renvoie NULL.

- char *split_to_str(char **split, char *separator) -> Transforme le split ou un text en un string. La fonction retourne la string. Separator permet d'ajouter un string ou un char (sous forme de string) entre les lignes. Exemple : "\n" va permettre de séparer toutes les lignes par un \n.

- int strat_with(char *str1, char *str2) -> Retourne 1 si la string 1 commence par la string 2

- char **get_words(char *str) -> Retourne une liste de string dans lequel se trouve tout les mots d'une string.

- int str_to_int(unsigned char *str) -> Change une string en int. La fonction retourne les résultat

- void str_to_upper_case(char *str) -> Transforme les lettre minuscule d'une string en lettre majuscule

- void str_to_lower_case(char *str) -> Transforme les lettre majuscule d'une string en lettre minuscule

- void free_split(char **split) -> Vide le split de la mémoire

- void empty_str(void) -> Retourne un string vide

- char *double_to_str(double f, int precision) -> Retourne un double en string avec un nombre définie de chiffre après la virgule (int precision entre 0 et 7)