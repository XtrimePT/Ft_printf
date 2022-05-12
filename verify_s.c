/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:06:59 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/13 00:06:59 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	verify_s(const char *format, int *i, va_list ptr)
{
	if (format[*i + 1] != 's')
		return ;
	ft_putstr_fd(va_arg(ptr, char *), 1);
	*i = *i + 2;
}
