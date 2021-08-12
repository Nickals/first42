/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:26:12 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/12 15:40:17 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	a;
	size_t	m;

	if (dest == src || !n)
		return (dest);
	a = 0;
	m = 0;
	while (a < n)
	{
		*((unsigned char *)dest + m) = *((unsigned char *)src + a);
		a++;
		m++;
	}
	return (dest);
}
