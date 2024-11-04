#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t i;
    size_t  j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (i < size - 1) {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i + j] = '\0';
    return (*dest);
}