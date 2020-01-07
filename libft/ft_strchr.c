/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:44:56 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		a;
	size_t		i;
	char		*b;

	a = (char)c;
	i = 0;
	b = (char *)s;
	while (b[i])
	{
		if (b[i] == a)
			return (&b[i]);
		i++;
	}
	if (b[i] == a)
		return (&b[i]);
	return (NULL);
}
