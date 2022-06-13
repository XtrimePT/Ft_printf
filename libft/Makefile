NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	cc -c $(FLAGS) -I. $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)