/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:03:06 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/22 12:31:52 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *cpy;

	cpy = NULL;
	cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (cpy != NULL)
		ft_strcpy(cpy, src);
	return (cpy);
}
