rm -f libft.a
cc -Wall -Wextra -Werror *.c -c
ar rc libft.a *.o
rm -f *.o
