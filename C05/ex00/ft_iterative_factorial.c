/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:21:42 by kbrousse          #+#    #+#             */
/*   Updated: 2022/03/08 13:59:41 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	value;

	i = 1;
	value = nb;
	if (nb <= 1 && nb >= 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		value = value * (nb - i);
		i++;
	}
	return (value);
}
