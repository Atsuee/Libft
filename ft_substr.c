#include "libft.h"

char    *ft_substr(char const *str, unsigned int depart, size_t len) {
    size_t  i;
    char    *result;

    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);

    i = 0;
    while (i < len && str[depart + i]) {
        result[i] = str[depart + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}