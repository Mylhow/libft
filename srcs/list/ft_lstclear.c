#include "libft_list.h"

static void	lstclear(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		lstclear(lst->next, del);
	ft_lstdelone(lst, del);
}

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	lstclear(*lst, del);
	*lst = 0;
}
