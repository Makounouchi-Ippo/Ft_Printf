/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_modif_set.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 14:41:15 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/03/21 12:27:07 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	set_signed(t_flags *flags, va_list arg)
{
	if (flags->length_modif == HH)
		return ((char)va_arg(arg, int));
	if (flags->length_modif == H)
		return ((short)va_arg(arg, int));
	if (flags->length_modif == L)
		return (va_arg(arg, long));
	if (flags->length_modif == LL)
		return (va_arg(arg, long long));
	if (flags->length_modif == J)
		return (va_arg(arg, intmax_t));
	if (flags->length_modif == Z)
		return (va_arg(arg, ssize_t));
	return (va_arg(arg, int));
}

uintmax_t	set_unsigned(t_flags *flags, va_list arg)
{
	if (flags->length_modif == HH)
		return ((unsigned char)va_arg(arg, unsigned int));
	if (flags->length_modif == H)
		return ((unsigned short)va_arg(arg, unsigned int));
	if (flags->length_modif == L)
		return (va_arg(arg, unsigned long));
	if (flags->length_modif == LL)
		return (va_arg(arg, uintmax_t));
	if (flags->length_modif == J)
		return (va_arg(arg, uintmax_t));
	if (flags->length_modif == Z)
		return (va_arg(arg, size_t));
	return (va_arg(arg, unsigned int));
}
