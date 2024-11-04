#include "libft.h"

char    *ft_strnstr(char *haystack, char *needle, size_t len) {
    size_t i;
    size_t j;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < len) {
        j = 0;
        while (haystack[i + j] && i + j <  len &&  haystack[i + j] == needle[j]) {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)haystack + i);
        i++;
    }
    return (NULL);
}
