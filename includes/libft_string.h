#ifndef LIBFTSTRING_H
# define LIBFTSTRING_H

# include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memrchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
#endif