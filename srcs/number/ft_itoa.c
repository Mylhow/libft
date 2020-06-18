#include "libft_number.h"
#include "libft_mem.h"

static	void	itoareccur(char *ptr, long n, int max)
{
	(n > 9) ? itoareccur(ptr, n / 10, max - 1) : 0;
	ptr[max] = (n % 10) + '0';
}

char			*ft_itoa(int n)
{
	char	*ptr;
	long	ntmp;
	int		max;

	ntmp = n;
	max = (n <= 0) ? 1 : 0;
	(ntmp < 0) ? ntmp *= -1 : 0;
	while (ntmp > 0)
	{
		ntmp /= 10;
		max++;
	}
	if (!(ptr = wrmalloc((max + 1) * sizeof(char))))
		return (0);
	ptr[max] = '\0';
	if ((ntmp = n) < 0)
	{
		ptr[0] = '-';
		ntmp *= -1;
	}
	itoareccur(ptr, ntmp, max - 1);
	return (ptr);
}