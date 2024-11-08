#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n) {
    size_t i;

    if (!dest)
        return (NULL);
    i = 0;
    if (dest > src) {
        i = n;
        while (i >= 0) {
            i--;
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    else {
        i = 0;
        while (i < n) {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}  