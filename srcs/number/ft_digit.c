#include "libft_number.h"
#include "libft_string.h"

int	ft_digit_base(long num, char *base)
{
	int i;
	int sbase;

	sbase = ft_strlen(base);
	i = 0;
	if (num < 0)
		i++;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / sbase;
		i++;
	}
	return (i);
}

int	ft_digit(long num)
{
	return (ft_digit_base(num, BASE10));
}