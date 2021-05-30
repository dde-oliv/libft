/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:39:01 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/05/18 12:35:14 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	len_s;
	unsigned int	count;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	count = 0;
	while (start < len_s && count < len && s[start + count] != '\0')
	{
		substr[count] = s[start + count];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
