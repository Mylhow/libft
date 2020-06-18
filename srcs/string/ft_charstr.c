#include "libft_string.h"

int		ft_charstr(const char hay, const char *needle)
{
	int i;

	i = 0;
	if (!hay || !needle)
		return (EXIT_FAILURE);
	while (needle[i])
	{
		if (hay == needle[i])
			return (EXIT_SUCCESS);
		i++;
	}
	return (EXIT_FAILURE);
}