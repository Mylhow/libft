/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_initlst.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: dgascon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:12:37 by dgascon      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/02 22:51:01 by dgascon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_printf.h"
#include "libft.h"

void	pf_initlst(va_list *ap, t_pf *tpf, int fd)
{
	tpf->ap = ap;
	tpf->fmoins = FALSE;
	tpf->fprecision = FALSE;
	tpf->fstars = FALSE;
	tpf->fzero = FALSE;
	tpf->fplus = FALSE;
	tpf->fdiese = FALSE;
	tpf->fspace = FALSE;
	tpf->fapostrophe = FALSE;
	tpf->vprecision = -1;
	tpf->whitespace = 0;
	tpf->zero = 0;
	tpf->specifier = ' ';
	tpf->width = 0;
	tpf->fd = fd;
}
