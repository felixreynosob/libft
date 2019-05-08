/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:19:19 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/20 09:19:29 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	char	*temp_result;

	if (s == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	temp_result = result;
	while (*s != '\0')
	{
		*temp_result = (*f)(*s);
		temp_result++;
		s++;
	}
	*temp_result = '\0';
	return (result);
}
