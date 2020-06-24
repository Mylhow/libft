#include "libft_gnl.h"

int		gnl_line(char *buffer, char **line, int index)
{
	if (index > 0)
		(*line) = ft_substr(buffer, 0, index - 1);
	else
		(*line) = ft_substr(buffer, 0, ft_strlen(buffer));
	if (!(*line))
		return (-1);
	return (0);
}
