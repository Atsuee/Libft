#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char *result = ft_strjoin("Salut","Walid");

    printf("%s \n", result);
    free(result);
    return (0);
}
