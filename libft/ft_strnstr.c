/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:29:01 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/11 17:59:38 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	m;

	c = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[c] && c < len)
	{
		m = 0;
		while (haystack[c + m] && needle[m] && c + m < len
			&& haystack[c + m] == needle[m])
			m++;
		if (!needle[m])
			return ((char *)(haystack + c));
		c++;
	}
	return (NULL);
}
