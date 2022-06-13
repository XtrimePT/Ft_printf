/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <joacorre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:41:34 by joacorre          #+#    #+#             */
/*   Updated: 2022/06/13 17:41:34 by joacorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*hex_p(unsigned long long int n, char *base)
{
	int					count;
	unsigned long long	n2;
	char				*num;

	count = 0;
	n2 = n;
	while (n > 15)
	{
		count++;
		n = n / 16;
	}
	count++;
	num = malloc((count + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[0] = base[n];
	num[count] = '\0';
	while (count - 1 > 0)
	{
		num[count - 1] = base[n2 % 16];
		n2 = n2 / 16;
		count--;
	}
	return (num);
}
