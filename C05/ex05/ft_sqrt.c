/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:46:27 by kbrousse          #+#    #+#             */
/*   Updated: 2022/03/08 18:24:24 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	value_test;
	int	index;

	value_test = 0;
	index = 0;
	while (index < 46341)
	{
		value_test = index * index;
		if (value_test == nb)
			return (index);
		index++;
	}
	return (0);
}
