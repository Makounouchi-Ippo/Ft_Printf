/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 17:39:42 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:21:55 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		conv_hex(uintmax_t nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char			*ft_itoa_base(uintmax_t n, uintmax_t base)
{
	uintmax_t		tmpn;
	int				i;
	char			*str;

	i = 0;
	tmpn = n;
	while (tmpn >= base)
	{
		tmpn /= base;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		tmpn = n % base;
		str[i] = conv_hex(tmpn);
		n /= base;
		i--;
	}
	return (str);
}
