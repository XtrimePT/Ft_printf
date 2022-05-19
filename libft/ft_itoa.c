/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:06:49 by joacorre          #+#    #+#             */
/*   Updated: 2022/04/28 00:06:49 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fn_char_count(int n)
{
	int	char_count;

	char_count = 0;
	while (n > 0)
	{
		char_count++;
		n /= 10;
	}
	return (char_count);
}

static char	*int_to_char(int char_count, int n, int index_stop)
{
	char	*ptr;

	ptr = malloc(char_count + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[char_count] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		if (n != -2147483648)
			n *= -1;
		if (n == -2147483648)
		{
			ptr[10] = '8';
			char_count = 10;
			n = 214748364;
		}
	}
	while (char_count - 1 >= index_stop)
	{
		ptr[char_count - 1] = (n % 10) + 48;
		n /= 10;
		char_count--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (!n)
		return (NULL);
	if (n == -2147483648)
	{
		ptr = int_to_char(11, -2147483648, 1);
	}
	else if (n < 0)
	{
		ptr = int_to_char(fn_char_count(n * -1) + 1, n, 1);
	}
	else
	{
		ptr = int_to_char(fn_char_count(n), n, 0);
	}
	return (ptr);
}

/*int main()
{
    char *ptr;
    ptr = ft_itoa(-2147483648);
    printf("%s", ptr);
    return (0);
}*/