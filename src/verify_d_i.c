/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:25:06 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/19 23:25:06 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	verify_d_i(const char *format, int *i, va_list ptr, int *str_len)
{
	char	*s;

	if (format[*i + 1] != 'd' && format[*i + 1] != 'i')
		return ;
	s = ft_itoa(va_arg(ptr, int));
	ft_putstr_fd(s, 1);
	*i = *i + 2;
	*str_len = *str_len + ft_strlen(s);
}
