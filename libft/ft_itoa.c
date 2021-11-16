/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:56:13 by nmoncada          #+#    #+#             */
/*   Updated: 2021/11/16 19:57:34 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	getlen(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*ptr;

	nb = n;
	len = getlen(nb);
	ptr = (char *)malloc(sizeof(*ptr) * (1 + len));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		ptr[0] = '0';
	while (nb > 0)
	{
		ptr[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}
