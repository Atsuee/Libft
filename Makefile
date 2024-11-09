LIBC = ft_atoi.c ft_strnstr.c ft_strlen.c ft_toupper.c ft_bzero.c \
			ft_memset.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
					ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c\
						ft_strncmp.c ft_calloc.c ft_strdup.c\

ADDITIONELS = ft_putchar_fd.c ft_itoa.c ft_strjoin.c ft_substr.c ft_strtrim.c

OBJ = $(LIBC:.c=.o) $(ADDITIONELS:.c=.o)

NAME = libft.a

CC = cc

CFLAGS =  -Wall -Werror -Wextra -I ./

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

test : $(NAME) main.o
	$(CC) $(CFLAGS) main.c -L. -lft -o test

main.o : main.c $(NAME)
	$(CC) $(CFLAGS) -c main.c

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) main.o test

re : fclean all

.PHONY: all clean fclean re
