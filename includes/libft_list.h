#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H
# include "libft.h"

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			ft_lstadd_back(t_list **alst, t_list *enew);
#endif