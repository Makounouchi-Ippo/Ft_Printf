/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:21:09 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:49:53 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s)
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	nb_word = ft_cnt_parts((const char *)s, c);
	t = (char**)malloc(sizeof(*t) * (ft_cnt_parts((const char *)s, c) + 1));
	if (!t)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s += ft_wlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
