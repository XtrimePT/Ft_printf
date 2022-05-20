NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard src/*.c)

OBJECTS = $(SOURCES:.c=.o)


all: $(NAME)

$(NAME):
	make all clean -C libft
	mv libft/libft.a $(NAME)
	cc -c $(FLAGS) -Iincludes ft_printf.c $(SOURCES)
	ar -rcs $(NAME) ft_printf.o $(OBJECTS)

clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)