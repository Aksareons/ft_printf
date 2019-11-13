/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voksenui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:53:04 by voksenui          #+#    #+#             */
/*   Updated: 2018/11/07 19:54:34 by voksenui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (nb > 0)
	{
		while (i * i < nb)
			i++;
		if (nb % i == 0)
			j += i;
	}
	return (j);
}