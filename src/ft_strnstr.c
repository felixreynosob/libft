/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:41:55 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/22 12:32:15 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(to_find);
	if (!*to_find && str == to_find)
		return ((char *)str);
	while (str[i] != '\0' && len + i <= n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
			j++;
		if (!(to_find[j]))
			return ((char *)str + i);
		i++;
	}
	return (0);
}
