NAME = libftprintf.a
SRC = ft_printf.c conversion.c convert_hexa.c convert_deca.c
OBJS = $(SRC:.c=.o)
LIBFT_OBJS = libft/*.o
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(OBJS)
	$(MAKE) -C libft
	ar -rcs $(NAME) $(OBJS) $(LIBFT_OBJS)
$(NAME): all
clean:
	$(MAKE) clean -C libft
	rm -f $(OBJS)
fclean:
	$(MAKE) fclean -C libft
	rm -f $(NAME)

re: fclean all
