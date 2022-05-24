/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:25:54 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/24 00:25:54 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	verify_u(const char *format, int *i, va_list ptr, int *str_len)
{
	char	*s;

	if (format[*i + 1] != 'u')
		return ;
	*i = *i + 2;
	s = ft_itoa_unsigned(va_arg(ptr, int));
	ft_putstr_fd(s, 1);
	*str_len = *str_len + ft_strlen(s);

}