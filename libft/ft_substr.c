/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:14:15 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/16 19:14:15 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	n;
	size_t	m;

	ns = malloc(len + 1);
	n = 0;
	m = start;
	if (!s || ns == 0)
		return (NULL);
	while (m < ft_strlen(s) && n < len)
	{
		ns[n] = s[m];
		n++;
		m++;
	}
	ns[n] = '\0';
	return (ns);
}
