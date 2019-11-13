/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voksenui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:08:42 by voksenui          #+#    #+#             */
/*   Updated: 2018/10/29 17:55:02 by voksenui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mm;

	if ((mm = (void *)malloc(size)) && size)
	{
		ft_bzero(mm, size);
		return (mm);
	}
	return (NULL);
}
