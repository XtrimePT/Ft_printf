/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_x_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:39:42 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/24 00:39:42 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	verify_x_X(const char *format, int *i, va_list ptr, int *str_len)
{
	char	*s;
	int		j;

	j = 0;
	if (format[*i + 1] != 'x' && format[*i + 1] != 'X')
		return ;
	s = hex(va_arg(ptr, unsigned long long), "0123456789abcdef");
	if (format[*i + 1] == 'X')
	{
		while (s[j] != '\0')
		{
			s[j] = ft_toupper(s[j]);
			j++;
		}
	}
	ft_putstr_fd("0x", 1);
	//ft_putstr_fd(s, 1);
	*str_len = *str_len + (2 + ft_strlen(s));
	*i = *i + 2;
}