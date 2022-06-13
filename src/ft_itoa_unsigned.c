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

static int	unsigned_count(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*int_to_char_unsigned(int char_count, unsigned int nbr)
{
	char	*ptr;

	ptr = malloc(char_count + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[char_count] = '\0';
	while (char_count - 1 >= 0)
	{
		ptr[char_count - 1] = (nbr % 10) + 48;
		nbr /= 10;
		char_count--;
	}
	return (ptr);
}

/*static unsigned int	int_to_unsigned(long long n)
{
	unsigned int	n2;

	if (n == -1)
		n2 = 4294967295;
	else if (n < -1)
		n2 = 4294967295 - n;
	return (n2);
}*/

char	*ft_itoa_unsigned(unsigned int n)
{
	char		*ptr;

	if (!n)
		return (NULL);
	ptr = int_to_char_unsigned(unsigned_count(n), n);
	return (ptr);
}
