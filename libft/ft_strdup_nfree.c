/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_nfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:46:06 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_nfree(char *src, int option)
{
	uintmax_t		i;
	char			*str2;

	i = 0;
	while (src[i])
		i++;
	str2 = (char*)malloc(sizeof(char) * i + 1);
	if (!str2)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str2[i] = src[i];
		i++;
	}
	str2[i] = '\0';
	if (option == 1)
		if (src)
			free(src);
	return (str2);
}
