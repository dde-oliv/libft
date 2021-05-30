/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 00:57:00 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/05/19 01:56:58 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		idx;
	int		alg;
	int		sig;

	size = 1;
	while (size < 10 && (n / ft_iterative_power(10, size)) != 0)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	idx = 0;
	sig = ft_signal(n);
	while (size > idx)
	{
		alg = sig * (n / ft_iterative_power(10, size - idx - 1));
		str[idx] = 48 + alg;
		n = n - sig * (alg * ft_iterative_power(10, size - idx - 1));
		idx++;
	}
	str[idx] = '\0';
	if (sig < 0)
		str = ft_strjoin("-", str);
	return (str);
}
