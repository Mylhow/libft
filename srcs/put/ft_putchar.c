#include "libft_put.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnchar(char c, int n)
{
	while (n--)
	{
		write(1, &c, 1);
	}
}

void	ft_putnchar_fd(char c, int n, int fd)
{
	while (n--)
	{
		write(fd, &c, 1);
	}
}
