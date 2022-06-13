NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard src/*.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	make all clean -C libft
	mv libft/libft.a $(NAME)
	cc -c $(FLAGS) -I. $(SOURCES)
	mv *.o src/
	ar -rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)