.DEFAULT_GOAL := all
CC = cc
NAME = rush-02
SRCS = src/main.c src/ft_input_validation.c src/ft_str_is_numeric.c src/ft_atoi.c src/dict_parser.c src/ft_conversion.c src/ft_split.c src/ft_atoi2.c src/ft_strlen.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes 

#.c.o:
#	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

#all:
#	cc $(CFLAGS) -c $(OBJS)
#	cc $(CC) $(CFLAGS) -o $(NAME) $(OBJS)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

#clean:
#	rm -f $(OBJS)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
