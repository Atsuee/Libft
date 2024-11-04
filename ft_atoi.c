#include "libft.h"

int ft_atoi(char *str) {
    int i;
    int resultat;
    int signe;

    i = 0;
    signe = 1;
    resultat = 0;
    while ((str[i] > '\t' && str[i] < '\r') || str[i] == 32) 
        i++;
    if (str[i] == '-' || str[i] =='+') {
        if (str[i] == '-')
            signe *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        resultat *= 10;
        resultat += str[i] - '0';
        i++;
    }
    return (resultat * signe);
}
