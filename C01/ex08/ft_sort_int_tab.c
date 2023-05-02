/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:58:38 by kbrousse          #+#    #+#             */
/*   Updated: 2022/02/22 15:41:14 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_value;
	int	i;

	temp_value = 0;
	i = 0;
	while (i <= size - 2)
	{
		if ((tab[i] > tab[i + 1]))
		{
			temp_value = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp_value;
			i = 0;
		}
		else
			i++;
	}
}
