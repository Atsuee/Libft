#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2) {  
    size_t  len1;
    size_t  len2;
    char    *result;
    size_t  i;

    len1 = 0;
    len2 = 0;
    while (s1)
        len1++; //Calcule la taille de s1
    while (s2)
        len2++; //Calcule la taille de s2

    //Allocation de la mémoire pour prednre la taille des deux chaines de caractères en même temps et inclue de '\0'
    result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (NULL); //retourne NULL si malloc échoue

    i = 0;
    printf("%zu", i);
    while (s1) {
        printf("%zd", i);
        result[i] = s1[i];
        i++;
    }
    while (s2) {
        result[len1] = s2[len2];
        len2++;
        len1++;
    }
    result[len1] = '\0';
    return (result);
}