/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: freynoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:56:13 by freynoso          #+#    #+#             */
/*   Updated: 2019/02/20 09:56:16 by freynoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (s != NULL)
		write(1, s, ft_strlen(s));
}
