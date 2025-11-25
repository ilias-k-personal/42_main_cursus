#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) 
        | (c >= 65 && c <= 90)
        | (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	
	printf("%c\n%d\n%d\n", *argv[1], *argv[1], ft_isalnum(*argv[1]));
	return 0;
}
*/