/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:00:33 by sgath             #+#    #+#             */
/*   Updated: 2020/11/08 12:13:53 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	long long int	n;

	i = 1;
	n = 0;
	while (*str == ' ' || *str == '\n' || *str == '\f' || *str == '\t' ||
			*str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = n * 10 + (*str - 48);
		str++;
		if ((n * i) > 2147483647)
			return (-1);
		if ((n * i) < -2147483648)
			return (0);
	}
	return (n * i);
}
