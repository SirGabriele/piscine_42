/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:19:55 by kbrousse          #+#    #+#             */
/*   Updated: 2022/03/07 15:37:26 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	index;
	int	count_minus;
	int	number;

	index = 0;
	count_minus = 0;
	number = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == 43 || str[index] == 45)
	{
		if (str[index] == 45)
			count_minus++;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		number = (number * 10 + (str[index] - 48));
		index++;
	}
	if (count_minus % 2 == 1)
		return (-number);
	return (number);
}
