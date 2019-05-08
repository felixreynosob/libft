/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:15:49 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/22 12:32:33 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tab;
	size_t	i;

	tab = (void *)malloc(sizeof(void) * size);
	if (!(tab))
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
