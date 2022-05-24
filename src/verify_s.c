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

#include "../ft_printf.h"

void	verify_s(const char *format, int *i, va_list ptr, int *str_len)
{
	char	*s;

	if (format[*i + 1] != 's')
		return ;
	*i = *i + 2;
	s = ft_strdup(va_arg(ptr, char *));
	ft_putstr_fd(s, 1);
	*str_len = *str_len + ft_strlen(s);
}
