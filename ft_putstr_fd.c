/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:29:38 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/05/19 12:17:03 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	slen;
	int	count;

	count = 0;
	slen = ft_strlen(s);
	while (count < slen)
	{
		write(fd, &s[count], 1);
		count++;
	}
}
