/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 17:39:20 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/13 18:19:25 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			a;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	a = 0;
	while (a < n)
	{
		if (str1[a] == str2[a])
			a ++;
		else
			return (str1[a] - str2[a]);
	}
	return (0);
}
