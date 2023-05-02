/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:12:02 by kbrousse          #+#    #+#             */
/*   Updated: 2022/02/25 17:53:17 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
	{
	}
	else
	{
		while (s1[index] != '\0' && index <= n)
		{
			if ((s1[index] > s2[index]) || (s1[index] < s2[index]))
				return (s1[index] - s2[index]);
			else if (s1[index] == s2[index])
			{
				index++;
				if (index == n)
					return (0);
			}
		}
		if (s2[index] != '\0')
			return (-1);
		else
			return (0);
	}
	return (0);
}
