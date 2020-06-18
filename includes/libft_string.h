#ifndef LIBFTSTRING_H
# define LIBFTSTRING_H

# include "libft.h"
# include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memrchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dst, void const *src, int c, size_t n);
char	*ft_strdup(const char *s1);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *s1, const char *s2);
int		ft_charstr(const char hay, const char *needle);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif