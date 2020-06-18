#include "libft_list.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	(lst->next) ? ft_lstiter(lst->next, f) : 0;
}