NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard src/*.c)

OBJECTS = $(wildcard *.o)


all: $(NAME)

$(NAME):
	make all clean -C libft
	mv libft/libft.a $(NAME)
	cc -c $(FLAGS) -I includes ft_printf.c $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(wildcard *.o)
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)