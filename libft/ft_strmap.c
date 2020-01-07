/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:48:04 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s == 0 || f == 0)
		return (0);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (0);
	i = -1;
	while (s[++i])
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
