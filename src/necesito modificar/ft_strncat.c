/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:15:02 by nmoncada          #+#    #+#             */
/*   Updated: 2021/06/29 17:15:05 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	c;

	n = 0;
	c = 0;
	while (dest[n] != '\0')
		n++;
	while (src[c] != '\0' && c < nb)
	{
		dest[n] = src[c];
		c++;
		n++;
	}
	dest[n] = '\0';
	return (n + c);
}
