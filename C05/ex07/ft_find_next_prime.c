/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:46:27 by kbrousse          #+#    #+#             */
/*   Updated: 2022/03/08 18:03:12 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (nb <= 2)
			return (2);
		else if (ft_is_prime(nb) == 0)
			nb++;
		else if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}
