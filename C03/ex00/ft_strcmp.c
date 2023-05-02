/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:34:39 by kbrousse          #+#    #+#             */
/*   Updated: 2022/02/25 17:02:49 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if ((s1[index] > s2[index]) || (s1[index] < s2[index]))
			return (s1[index] - s2[index]);
		else if (s1[index] == s2[index])
			index++;
	}
	if (s2[index] != '\0')
		return (-1);
	else
		return (0);
}
