#include "libft.h"

int     ft_memcmp(const void *str, const void *str2, size_t n) {
    size_t i;

    i = 0;
    while (i < n) {
        if (*(unsigned char *)(str + i) != *(unsigned char *)(str2 + i))
            return (*(unsigned char *)(str + i) - *(unsigned char *)(str2 + i));
        i++;
    }
    return (0);
}