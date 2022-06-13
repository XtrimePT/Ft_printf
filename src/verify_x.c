/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 03:15:53 by marvin            #+#    #+#             */
/*   Updated: 2022/06/08 03:15:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	verify_x(const char *format, int *i, va_list ptr, int *str_len)
{
	char	*s;
	int		j;

	j = 0;
	if (format[*i + 1] != 'x' && format[*i + 1] != 'X')
		return ;
	s = hex(va_arg(ptr, int), "0123456789abcdef");
	if (format[*i + 1] == 'X')
	{
		while (s[j] != '\0')
		{
			s[j] = ft_toupper(s[j]);
			j++;
		}
	}
	ft_putstr_fd(s, 1);
	*str_len = *str_len + ft_strlen(s);
	*i = *i + 2;
	free(s);
}
