NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SOURCES = $(wildcard *.c)
SOURCES_LIBFT = $(wildcard libft/*.c)

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_LIBFT = $(SOURCES_LIBFT:.c=.o)


all: $(NAME)

$(NAME):
	cc -c $(FLAGS) $(SOURCES) $(SOURCES_LIBFT)
	ar -rcs $(NAME) $(OBJECTS) $(OBJECTS_LIBFT)

clean:
	rm -f $(OBJECTS) $(OBJECTS_LIBFT)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)