#include    "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t i;

    i = 0;
    while (i < size) {
        dest[i] = src[i];
        i++;
    }
    return (*dest);
}