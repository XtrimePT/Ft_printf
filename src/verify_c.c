/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:04:25 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/13 00:04:25 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	verify_c(const char *format, int *i, va_list ptr, int *str_len)
{
	if (format[*i + 1] != 'c')
		return ;
	ft_putchar_fd(va_arg(ptr, int), 1);
	*i = *i + 2;
	*str_len = *str_len + 1;
}
