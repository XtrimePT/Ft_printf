NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard src/*.c)

OBJECTS = $(wildcard *.o)


all: $(NAME)

$(NAME):
	make all clean -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	cc -c $(FLAGS) -I. ft_printf.c $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)