/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:29:01 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/10 19:47:58 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*len son los caracteres que se buscan en haystack y needle es lo que busca*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	c;
	size_t	m;

	n = ft_strlen((char *)needle);
	c = 0;
	m = 0;
	if (n == '\0')
		return ((char *)haystack);
	if (c != len)
	{
		while (haystack[c] != needle[m])
		{
			if (haystack[c] == needle[m])
			{
				c++;
				m++;
			}
			c++;
		}
		return ((char *)haystack[c]);
	}
	else
		return (NULL);
}
