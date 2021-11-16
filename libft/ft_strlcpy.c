/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:23:58 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/09 18:10:14 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	srcsize;

	if (!dest || !src)
		return (0);
	n = 0;
	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[n] != '\0' && n < (dstsize - 1))
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (srcsize);
}
