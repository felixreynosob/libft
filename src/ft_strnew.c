/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 12:39:14 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/22 11:39:46 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!(tab))
		return (NULL);
	ft_bzero(tab, size + 1);
	return (tab);
}
