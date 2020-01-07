/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:49:33 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*a;
	char	b;

	a = (char *)s;
	b = (char)c;
	i = ft_strlen(a) - 1;
	if (!s[0])
		return (NULL);
	if (a[i + 1] == b)
		return (&a[i + 1]);
	while (i)
	{
		if (a[i] == b)
			return (&a[i]);
		--i;
	}
	if (a[i] == b)
		return (&a[i]);
	return (NULL);
}
