/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:53:59 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/11 19:18:56 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (*(s + n) != '\0')
	{
		if (*(s + n) == (char)c)
			return ((char *)(s + n));
		n++;
	}
	if (*(s + n) == (char)c)
		return ((char *)(s + n));
	return (NULL);
}
