/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:42:13 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/12 16:29:20 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	a;
	size_t	m;

	if (!dst && !src)
		return (0);
	a = 0;
	m = 0;
	while (a < len)
	{
		*((unsigned char *)dst + m) = *((unsigned char *)src + a);
		a++;
		m++;
	}
	return (dst);
}
