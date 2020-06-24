#include "libft_list.h"

void	ft_lstadd_front(t_list **alst, t_list *enew)
{
	if (!alst || !enew)
		return ;
	enew->next = *alst;
	*alst = enew;
}
