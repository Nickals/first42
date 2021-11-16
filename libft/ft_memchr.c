/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 16:04:51 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/13 17:28:47 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	q;
	size_t			a;

	str = (unsigned char *)s;
	q = (unsigned char)c;
	a = 0;
	while (a < n)
	{
		if (*str == q)
			return (str);
		str++;
		a++;
	}
	return (NULL);
}
