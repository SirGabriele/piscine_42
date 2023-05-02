/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:08:03 by kbrousse          #+#    #+#             */
/*   Updated: 2022/02/22 18:34:00 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	spot;
	int	temp;

	spot = 0;
	while (spot < size / 2)
	{
		temp = tab[spot];
		tab[spot] = tab[size - 1 - spot];
		tab[size - 1 - spot] = temp;
		spot++;
	}
}
