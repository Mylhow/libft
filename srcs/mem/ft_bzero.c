/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgascon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:45:22 by dgascon           #+#    #+#             */
/*   Updated: 2020/12/02 09:45:23 by dgascon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}