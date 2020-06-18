#include "libft_string.h"

int		ft_strichr(const char *str, int charset)
{
	int		val;
	void	*ptr;

	val = -1;
	if (!(ptr = (void *)ft_memchr(str, charset, ft_strlen(str))))
		return (-1);
	if ((val = ptr - (void *)str) < 0)
		return (-1);
	return (val);
}