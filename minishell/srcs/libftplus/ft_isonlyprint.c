/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isonlyprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:41:15 by sgath             #+#    #+#             */
/*   Updated: 2021/04/05 12:43:08 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int
	ft_isonlyprint(int c)
{
	if (c >= 192 && c <= 255)
		return (0);
	return (1);
}
