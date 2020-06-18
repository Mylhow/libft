#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H
# include "libft.h"

# include <stdlib.h>

void	*wrmalloc(unsigned long size);
int		wrfree(void *ptr);
void	wrdestroy(void);
void	*ft_calloc(size_t count, size_t size);
#endif