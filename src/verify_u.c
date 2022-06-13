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
	char				*s;
	unsigned int		nbr;

	if (format[*i + 1] != 'u')
		return ;
	*i = *i + 2;
	nbr = va_arg(ptr, unsigned int);
	if (nbr == 0)
	{
		ft_putstr_fd("0", 1);
		*str_len = *str_len + 1;
	}
	else
	{
		s = ft_itoa_unsigned(nbr);
		ft_putstr_fd(s, 1);
		*str_len = *str_len + ft_strlen(s);
		free(s);
	}
}
