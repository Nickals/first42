/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:18:02 by nmoncada          #+#    #+#             */
/*   Updated: 2021/08/17 20:39:57 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		m;
	char	*ns;

	n = 0;
	m = 0;
	if (!s1 || !s2)
		return (NULL);
	ns = (char *)malloc(sizeof(char) *((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (ns)
	{
		while (s1[n])
		{
			ns[n] = s1[n];
			n++;
		}
		while (s2[m])
		{
			ns[m + n] = s2[m];
			m++;
		}
		ns[n + m] = '\0';
		return (ns);
	}
	return (0);
}
