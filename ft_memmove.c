/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:46:43 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/05/19 12:17:46 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	count;

	count = 0;
	temp = ft_calloc(n, sizeof(char));
	while (count < n && src + count != dest + count)
	{
		temp[count] = *(char *)(src + count);
		count++;
	}
	ft_memcpy(dest, temp, n);
	return (dest);
}
