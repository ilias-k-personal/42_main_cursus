# include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    while (s[i] != '\0')
        i++;
    return (i);
}
/*
int main(int argc, char *argv[])
{
    (void) argc;

    printf("string.h: %ld\nmy version: %ld\n", strlen(argv[1]), ft_strlen(argv[1]));
    return 0;
}
*/