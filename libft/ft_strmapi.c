/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:48:12 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*strmapi;

	if (s == 0 || f == 0)
		return (0);
	strmapi = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (strmapi == 0)
		return (0);
	i = -1;
	while (s[++i])
		strmapi[i] = f(i, s[i]);
	strmapi[i] = '\0';
	return (strmapi);
}
