#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	
	printf("%c\n%d\n%d\n", *argv[1], *argv[1], ft_isdigit(*argv[1]));
	return 0;
}
*/