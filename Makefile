NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = ft_printf.c $(wildcard src/*.c)

OBJECTS = $(SOURCES:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	make all clean -C libft
	mv libft/libft.a $(NAME)
	cc -c $(FLAGS) -I. $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f *.o $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)