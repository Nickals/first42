/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:15:38 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/09 17:39:45 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	c;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	n = ft_strlen(dst);
	c = 0;
	while (src[c] != '\0' && n + 1 < dstsize)
	{
		dst[n] = src[c];
		n++;
		c++;
	}
	dst[n] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[c]));
}
