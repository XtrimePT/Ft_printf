/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:12:40 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/19 23:12:40 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	verify_p(const char *format, int *i, va_list ptr, int *str_len)
{
	char					*s;
	unsigned long long int	nbr;

	if (format[*i + 1] != 'p')
		return ;
	*i = *i + 2;
	nbr = va_arg(ptr, unsigned long long int);
	if (nbr == 0)
	{
		ft_putstr_fd("0x0", 1);
		*str_len = *str_len + ft_strlen("0x0");
	}
	else
	{
		s = hex_p(nbr, "0123456789abcdef");
		ft_putstr_fd("0x", 1);
		ft_putstr_fd(s, 1);
		*str_len = *str_len + (2 + ft_strlen(s));
		free(s);
	}
}
