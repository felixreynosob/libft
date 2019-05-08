/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:54:55 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/22 11:45:33 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t j;

	j = 0;
	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n && dest[j])
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
