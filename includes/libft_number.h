#ifndef LIBFT_NUMBER_H
# define LIBFT_NUMBER_H
# include "libft.h"

int		ft_atoi(const char *str);
char	*ft_itoa_base(int n, char *base);
char	*ft_itoa(int n);
int		ft_digit_base(long num, char *base);
int		ft_digit(long num);
#endif