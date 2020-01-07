/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:41:40 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp;
	unsigned char		*tmp2;
	size_t				i;
	unsigned char		kaka;

	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	i = 0;
	kaka = (unsigned char)c;
	while (i < n)
	{
		if ((*tmp2++ = *tmp++) == kaka)
			return (tmp2);
		i++;
	}
	return (NULL);
}
