/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:09:44 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/09 23:09:44 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft.h"

// Base function
int		ft_printf(const char *format, ...);

// Identifier verification functions
void	verify_c(const char *format, int *i, va_list ptr, int *str_len);
void	verify_s(const char *format, int *i, va_list ptr, int *str_len);
void	verify_p(const char *format, int *i, va_list ptr, int *str_len);
void	verify_d_i(const char *format, int *i, va_list ptr, int *str_len);
void	verify_u(const char *format, int *i, va_list ptr, int *str_len);

// Other functions
char	*hex(unsigned long long n, char *base);

#endif