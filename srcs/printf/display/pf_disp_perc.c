/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_disp_perc.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dgascon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 16:55:41 by dgascon      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/02 22:50:59 by dgascon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"
#include "libft_put.h"

void	disp_percent(t_pf *tpf)
{
	int nb_space;

	nb_space = (tpf->width > 0) ? tpf->width - 1 : tpf->width;
	tpf->length += nb_space + 1;
	if (!tpf->fmoins)
	{
		while (nb_space--)
		{
			if (tpf->fzero || tpf->zero == -1)
				ft_putchar_fd('0', 1);
			else
				ft_putchar_fd(' ', 1);
		}
		ft_putchar_fd('%', 1);
	}
	else
	{
		ft_putchar_fd('%', 1);
		ft_putnchar_fd(' ', nb_space, 1);
	}
}
