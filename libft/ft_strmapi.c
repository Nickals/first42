/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:39:58 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/17 21:57:06 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	n;

	if (s == NULL)
		return (NULL);
	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	n = 0;
	while (str[n])
	{
		str[n] = f(n, str[n]);
		n++;
	}
	return (str);
}
