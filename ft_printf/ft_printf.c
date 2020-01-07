/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 10:40:14 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:22:48 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_printf(const char *restrict format, ...)
{
	va_list			arg;
	int				last_return;
	t_join			*lst;
	t_split_tool	tool;

	if (!format)
		return (0);
	tool = init_tool();
	lst = new_lst();
	va_start(arg, format);
	last_return = first_step(format, &tool, lst, arg);
	va_end(arg);
	return (last_return);
}
