/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:42:13 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/12 17:46:26 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*m;
	size_t	n;

	a = (char *)src;
	m = (char *)dst;
	n = 0;
	if (!dst && !src)
		return (NULL);
	if (m > a)
		while (len-- > 0)
			m[len] = a[len];
	else
	{
		while (n < len)
		{
			m[n] = a[n];
			n++;
		}
	}
	return (dst);
}
