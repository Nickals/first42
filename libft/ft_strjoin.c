/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:18:02 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/16 19:54:09 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	m;
	int		c;
	char	*ns;

	n = ft_strlen(s1) + ft_strlen(s2);
	m = 0;
	ns = malloc(n + 1);
	while (n > m)
	{
		while (s1 != NULL)
			ns[m] = s1[m];
		if (m >= ft_strlen(s1))
		{
			c = 0;
			while (s2 != NULL)
				ns[m] = s2[c];
			c++;
		}
		m++;
		ns[m] = '\0';
	}
	return (ns);
}
