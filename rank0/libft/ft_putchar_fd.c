# include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main(int argc, char *argv[])
{
    (void) argc;

    ft_putchar_fd(*argv[1], 1);
    return 0;
}
*/