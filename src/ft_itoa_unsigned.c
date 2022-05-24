/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:29:39 by joacorre          #+#    #+#             */
/*   Updated: 2022/05/24 00:29:39 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	fn_char_count_unsigned(unsigned int n)
{
	int		char_count;

	char_count = 0;
	while (n > 0)
	{
		char_count++;
		n /= 10;
	}
	return (char_count);
}

static char	*int_to_char_unsigned(int char_count, unsigned int n)
{
	char	*ptr;

	ptr = malloc(char_count + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (char_count - 1 >= 0)
	{
		ptr[char_count - 1] = (n % 10) + 48;
		n /= 10;
		char_count--;
	}
	return (ptr);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*ptr;

	if (!n)
		return (NULL);
	ptr = int_to_char_unsigned(fn_char_count_unsigned(n), n);
	return (ptr);
}
