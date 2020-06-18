#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H
# include "libft.h"

# include <stdlib.h>

void	*wrmalloc(unsigned long size);
int		wrfree(void *ptr);
void	wrdestroy(void);
#endif