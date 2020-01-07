/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:49:42 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		start1;
	int		start2;
	char	tmp;

	start1 = 0;
	start2 = ft_strlen(str);
	while (str[start1] != str[start2])
	{
		tmp = str[start1];
		str[start1] = str[start2];
		str[start2] = tmp;
	}
	return (str);
}
