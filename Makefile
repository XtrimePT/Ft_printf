NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard src/*.c)
SOURCES_LIBFT = $(wildcard libft/*.c)

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_LIBFT = $(SOURCES_LIBFT:.c=.o)


all: $(NAME)

$(NAME):
	cc -c $(FLAGS) -I includes ft_printf.c $(SOURCES) $(SOURCES_LIBFT)
	ar -rcs $(NAME) ft_printf.o $(OBJECTS) $(OBJECTS_LIBFT)

clean:
	rm -f ft_printf.o $(OBJECTS) $(OBJECTS_LIBFT)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)