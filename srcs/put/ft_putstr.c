#include "libft_put.h"
#include "libft_string.h"

void	ft_putstr(char *c)
{
	if (!c)
		return ;
	write(1, c, ft_strlen(c));
}

void	ft_putstr_fd(char *c, int fd)
{
	if (!c || !fd)
		return ;
	write(fd, c, ft_strlen(c));
}
