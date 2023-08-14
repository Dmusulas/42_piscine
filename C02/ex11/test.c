#include <unistd.h>
#include <stdio.h>

char	*ft_convert_non_printable(char c, char *buffer);

int main(void)
{
	char testchar = '\f';
	char *hexarray = "0123456789abcdef";
	char buffer[4] = {'\0'};

	printf("The decimal representation of char is %i\n", testchar);
	printf("The division of %i by 16 is %i\n", testchar, testchar / 16);
	printf("The modulo of %i by 16 is %i\n", testchar, testchar % 16);
	printf("The modulo of %i by 16 is %c\n", testchar, hexarray[testchar % 16]);

	ft_convert_non_printable(testchar, buffer);
	printf("Testing the conversion NOW: %s\n", buffer);
	return (0);
}
