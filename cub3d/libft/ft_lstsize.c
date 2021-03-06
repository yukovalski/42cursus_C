/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:38:35 by sgath             #+#    #+#             */
/*   Updated: 2020/11/07 21:00:50 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 1;
	if (lst == 0)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
