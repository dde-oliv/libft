/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:00:02 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/05/16 11:32:29 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sig;
	int	num;

	sig = 1;
	num = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			sig = sig * (-1);
		str++;
	}
	while (47 < *str && *str < 58)
	{
		num = 10 * num + (*str - 48);
		str++;
	}
	return (sig * num);
}
