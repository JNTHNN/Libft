
<p align="center">
  <img src="https://i.ibb.co/HFYzbq2/book-libft.png" alt="LIBFT Book" width="200">
</p>
 
 # Ma première librairie : LIBFT

Ce projet a pour objectif de me faire coder en C une bibliothèque de fonctions usuelles que je pourrais utiliser pour mes prochains projets.
Fonctions basées sur celles de la librairie libc

___

# Les fonctions

## Les Checkers

 - [ft_isalpha](sources/is/ft_isalpha.c) : Vérifie si un caractère est alphabétique.
 - [ft_isdigit](sources/is/ft_isdigit.c) : Vérifie si un caractère est un chiffre décimal.
 - [ft_isalnum](sources/is/ft_isalnum.c) : Vérifie si un caractère est alphabétique ou un chiffre décimal.
 - [ft_isascii](sources/is/ft_isascii.c) : Vérifie si un caractère est dans la plage ASCII.
 - [ft_isprint](sources/is/ft_isprint.c) : Vérifie si un caractère est imprimable.
 - [ft_strlen] (sources/str/ft_strlen.c): Calcule la longueur d'une chaîne de caractère.
 - [ft_strchr](sources/str/ft_strchr.c) : Cherche la premiere occurence d'un caractere donne dans une chaine de caracteres
 - [ft_strrchr](sources/str/ft_strrchr.c) : Cherche la derniere occurence d'un caractere donne dans une chaine de caracteres.
 - [ft_strncmp](sources/str/ft_strncmp.c) : Compare deux chaines de caractere jusqu'a un certain nombre de caracteres.
 - [ft_memchr](sources/mem/ft_memchr.c) : Cherche la premiere occurence d'un octet donne dans une zone de memoire.
 - [ft_memcmp](sources/mem/ft_memcmp.c) : Compare deux zones de  memoire
 - [ft_strnstr](sources/str/ft_strnstr.c) : Cherche la premiere occurence d'une chaine de caracteres donnee dans une autre chaine de caracteres, jusqu'a un certain nombre de caracteres.

## Gestion Mémoire (malloc)
 - [ft_memset](sources/mem/ft_memset.c) : Remplit un zone mémoire avec un octet donné
 - [ft_bzero](sources/mem/ft_bzero.c) : Met à zero une zone de memoire.
 - [ft_memcpy](sources/mem/ft_memcpy.c) : Copie une zone de mémoire jusqu'à ce au'un certain caractère soit atteint.
 - [ft_memmove](sources/mem/ft_memmove.c) : Copie une zone de memoire, même si les zones se chevauchent.
 - [ft_calloc](sources/mem/ft_calloc.c) : Alloue de la memoire pour un nombre donnee d'elements d'une certaine taille et renvoie un pointeur vers la zone memoire allouee, initialisee a zero
 - [ft_strdup](sources/str/ft_strdup.c) : Alloue de la memoire pour une copie d'une chaine de caracteres et la retourne.
## Convertisseurs
 - [ft_atoi](sources/str/ft_atoi.c) : Convertit une chaine de caracteres en un entier
 -  [ft_itoa](sources/str/ft_itoa.c) : convertit un entier en une chaine de caracteres.

## Manipulations de chaînes de caractères
 - [ft_strlcpy](sources/str/ft_strlcpy.c) : Copie la chaine de caracteres source dans la chaine de caracteres de destination, en s'assurant que la chaine de destination est de taille suffisante.
 - [ft_strlcat](sources/str/ft_strlcat.c) : Concatene deux chaines de caracteres, en s'assurant que la chiane de destination est de taille suffisante.
 - ### Convertisseurs
 - [ft_toupper](sources/str/ft_toupper.c) : Convertit un caractere en majuscule s'il est minuscule
 - [ft_tolower](sources/str/ft_tolower.c) : Convertit un caractere en minuscule s'il est en majuscule
 - [ft_strmapi](sources/str/ft_strmapi.c) : Applique une fonction donnee a chaque caractere d'une chaine de caracteres pour creer une nouvelle chaine
 - [ft_substr](sources/str/ft_substr.c) : Extrait une sous-chaine a partir d'une chaine de caractere donnee.
 - [ft_strjoin](sources/str/ft_strjoin.c) : Concatene deux chaines de caracteres.
 - [ft_strtrim](sources/str/ft_strtrim.c) : supprime les espaces blancs (ou tout autre caractere donee) au debut et a la fin d'une chaine de caracteres
 - [ft_split](sources/str/ft_split.c) : Divise une chaine de caracteres en un tableau de sous-chaines en utilisant un caractere de separation donne.
 - [ft_striteri](sources/str/ft_striteri.c) : Applique la fonction ’f’ à chaque caractère de la
 chaîne de caractères transmise comme argument,
 et en passant son index comme premier argument.
 Chaque caractère est transmis par adresse à ’f’
 afin d’être modifié si nécessaire.

## Écriture
 - [ft_putchar_fd](sources/put/ft_putchar_fd.c) : Ecrit un caractere sur un descripteur de fichier donne
 - [ft_putstr_fd](sources/put/ft_putstr_fd.c) : Ecrit une chaine de caracteres sur un descripteur de fichier donne
 - [ft_putendl_fd](sources/put/ft_putendl_fd.c) : Ecrit une chaine de caracteres suivie d'un saut a la ligne sur un descripteur de fichier donne
 - [ft_putnbr_fd](sources/put/ft_putnbr_fd.c) : Ecrit un entier sur un descripteur de fichier donne

## Listes chaînées (bonus)
 - [ft_lstnew](sources/lst/ft_lstnew.c) : Ajoute un nouvel élèment à une liste chainée
 - [ft_lstadd_front](sources/lst/ft_lstadd_front.c) : Ajoute un élement au début d'une liste chainée
 - [ft_lstsize](sources/lst/ft_lstsize.c) : Calcule la taille d'une liste chainée
 - [ft_lstlast](sources/lst/ft_lstlast.c) : 
 - [ft_lstadd_back](sources/lst/ft_lstadd_back.c) : Ajoute un élement à la fin d'une liste chainée
 - [ft_lstdelone](sources/lst/ft_lstdelone.c) : Supprime un élement d'une liste chainée
 - [ft_lstclear](sources/lst/ft_lstclear.c) : Supprime l'ensemble d'une liste chainée
 - [ft_lstiter](sources/lst/ft_lstiter.c) : Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.
 - [ft_lstmap](sources/lst/ft_lstmap.c) : Itère sur la liste ’lst’ et applique la fonction
 ’f ’au contenu de chaque élément. Crée une nouvelle
 liste résultant des applications successives de
 ’f’. La fonction ’del’ est là pour détruire le
 contenu d’un élément si nécessaire.
