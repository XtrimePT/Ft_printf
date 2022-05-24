/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:26:23 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/10 00:26:23 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	verify_printf(const char *format, va_list ptr, int *str_len)
{
	int	i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			i++;
			*str_len = *str_len + 1;
		}
		else
		{
			verify_c(format, &i, ptr, str_len);
			verify_s(format, &i, ptr, str_len);
			verify_p(format, &i, ptr, str_len);
			verify_d_i(format, &i, ptr, str_len);
			verify_u(format, &i, ptr, str_len);
			verify_x_X(format, &i, ptr, str_len);
		}
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		str_len;

	str_len = 0;
	va_start(ptr, format);
	verify_printf(format, ptr, &str_len);
	va_end(ptr);
	return (str_len);
}
