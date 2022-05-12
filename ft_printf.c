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

void	verify_printf(const char *format, int *i, va_list ptr)
{
	verify_c(format, i, ptr);
	verify_s(format, i, ptr);
	//verify_p(format, i, ptr);
	//verify_d(format, i, ptr);
	//verify_i(format, i, ptr);
	//verify_u(format, i, ptr);
	//verify_x(format, i, ptr);
	//verify_percentage(format, i, ptr);
}

int ft_printf(const char *format, ...)
{
    va_list     ptr;
    int i;
    
    i = 0;
    va_start(ptr, format);
    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            ft_putchar_fd(format[i], 1);
            i++;
        }
        else
            verify_printf(format, &i, ptr);
    }
    va_end(ptr);
    return (0);
}

int main()
{
    ft_printf("TEXTO PURO. AQUI VAI UM CHAR: %c\nAGORA UMA FRASE: %s", 'z', "eu amo a Rita!!!!");
    return 0;
}
