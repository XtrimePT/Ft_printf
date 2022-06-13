/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:41:48 by joacorre          #+#    #+#             */
/*   Updated: 2022/06/08 13:41:48 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	verify_percent(const char *format, int *i, int *str_len)
{
	if (format[*i + 1] != '%')
		return ;
	*i = *i + 2;
	ft_putchar_fd('%', 1);
	*str_len = *str_len + 1;
}
