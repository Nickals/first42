/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoncada <nmoncada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:09:35 by nmoncada          #+#    #+#             */
/*   Updated: 2021/11/17 17:18:35 by nmoncada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ne;
	int		n;

	ne = lst;
	n = 0;
	while (ne != NULL)
	{
		n += 1;
		ne = ne->next;
	}
	return (n);
}
