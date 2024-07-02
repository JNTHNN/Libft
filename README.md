
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
 - **ft_isdigit** : Vérifie si un caractère est un chiffre décimal.
 - **ft_isalnum** : Vérifie si un caractère est alphabétique ou un chiffre décimal.
 - **ft_isascii** : Vérifie si un caractère est dans la plage ASCII.
 - **ft_isprint** : Vérifie si un caractère est imprimable.
 - **ft_strlen** : Calcule la longueur d'une chaîne de caractère.
 - **ft_strchr** : Cherche la premiere occurence d'un caractere donne dans une chaine de caracteres
 - **ft_strrchr** : Cherche la derniere occurence d'un caractere donne dans une chaine de caracteres.
 - **ft_strncmp** : Compare deux chaines de caractere jusqu'a un certain nombre de caracteres.
 - **ft_memchr** : Cherche la premiere occurence d'un octet donne dans une zone de memoire.
 - **ft_memcmp** : Compare deux zones de  memoire
 - **ft_strnstr** : Cherche la premiere occurence d'une chaine de caracteres donnee dans une autre chaine de caracteres, jusqu'a un certain nombre de caracteres.

## Gestion Mémoire (malloc)
 - **ft_memset** : Remplit un zone mémoire avec un octet donné
 - **ft_bzero** : Met à zero une zone de memoire.
 - **ft_memcpy** : Copie une zone de mémoire jusqu'à ce au'un certain caractère soit atteint.
 - **ft_memmove** : Copie une zone de memoire, même si les zones se chevauchent.
 - **ft_calloc** : Alloue de la memoire pour un nombre donnee d'elements d'une certaine taille et renvoie un pointeur vers la zone memoire allouee, initialisee a zero
 - **ft_strdup** : Alloue de la memoire pour une copie d'une chaine de caracteres et la retourne.
## Convertisseurs
 - **ft_atoi** : Convertit une chaine de caracteres en un entier
 -  **ft_itoa** : convertit un entier en une chaine de caracteres.

## Manipulations de chaînes de caractères
 - **ft_strlcpy** : Copie la chaine de caracteres source dans la chaine de caracteres de destination, en s'assurant que la chaine de destination est de taille suffisante.
 - **ft_strlcat** : Concatene deux chaines de caracteres, en s'assurant que la chiane de destination est de taille suffisante.
 - ### Convertisseurs
 - **ft_toupper** : Convertit un caractere en majuscule s'il est minuscule
 - **ft_tolower** : Convertit un caractere en minuscule s'il est en majuscule
 - **ft_strmapi** : Applique une fonction donnee a chaque caractere d'une chaine de caracteres pour creer une nouvelle chaine
 - **ft_substr** : Extrait une sous-chaine a partir d'une chaine de caractere donnee.
 - **ft_strjoin** : Concatene deux chaines de caracteres.
 - **ft_strtrim** : supprime les espaces blancs (ou tout autre caractere donee) au debut et a la fin d'une chaine de caracteres
 - **ft_split** : Divise une chaine de caracteres en un tableau de sous-chaines en utilisant un caractere de separation donne

## Écriture
 - **ft_putchar_fd** : Ecrit un caractere sur un descripteur de fichier donne
 - **ft_putstr_fd** : Ecrit une chaine de caracteres sur un descripteur de fichier donne
 - **ft_putendl_fd** : Ecrit une chaine de caracteres suivie d'un saut a la ligne sur un descripteur de fichier donne
 - **ft_putnbr_fd** : Ecrit un entier sur un descripteur de fichier donne
## Listes chaînées (bonus)
 - **ft_lstnew** : Ajoute un nouvel élèment à une liste chainée
 - **ft_lstadd_front** : Ajoute un élement au début d'une liste chainée
 - **ft_lstsize** : Calcule la taille d'une liste chainée
 - **ft_lstlast** : 
 - **ft_lstadd_back** : Ajoute un élement à la fin d'une liste chainée
 - **ft_lstdelone** : Supprime un élement d'une liste chainée
 - **ft_lstclear** : Supprime l'ensemble d'une liste chainée
 - **ft_lstiter** : 
 - **ft_lstmap** :
 - **ft_striteri** :


## Idées de contenu supplémentaire

-   Une brève introduction sur l'importance et l'utilité des bibliothèques en programmation.
-   Expliquer l'organisation de la bibliothèque LIBFT et sa structure de fichiers.
-   Fournir des exemples d'utilisation pour chaque fonction, en mettant en évidence leurs avantages et leurs cas d'utilisation.
-   Ajouter des explications détaillées sur les algorithmes ou les concepts utilisés dans certaines fonctions, montrant ainsi votre compréhension approfondie.
-   Mentionner les normes de codage et les bonnes pratiques que vous avez suivies lors de la création de la bibliothèque.
-   Inclure des témoignages ou des commentaires positifs d'autres développeurs qui ont utilisé votre bibliothèque.
-   Proposer des liens vers des tutoriels ou des guides d'utilisation pour aider les utilisateurs à tirer le meilleur parti de la bibliothèque.
-   Ajouter un guide de contribution pour encourager d'autres développeurs à contribuer à votre projet.
-   Inclure des informations sur les licences et les droits d'auteur de la bibliothèque.
-   Fournir des instructions claires sur la manière d'installer et d'utiliser la bibliothèque dans d'autres projets.




