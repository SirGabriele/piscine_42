/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:49:20 by kbrousse          #+#    #+#             */
/*   Updated: 2022/04/14 19:24:13 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_recursive(int nbr, char *base)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_recursive(214748364, base);
		ft_recursive(8, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_recursive(-nbr, base);
	}
	else if (nbr >= ft_strlen(base))
	{
		ft_recursive(nbr / ft_strlen(base), base);
		ft_recursive(nbr % ft_strlen(base), base);
	}
	else if (nbr < ft_strlen(base))
		ft_putchar(base[nbr]);
}

int	ft_strstr(char *base)
{
	int		index;
	int		j;

	index = 0;
	while (base[index] != '\0')
	{
		j = 0;
		while (base[index + j] != '\0')
		{
			j++;
			if (base[index + j] == base[index] || base[index + j] == 43
				|| base[index + j] == 45)
				return (1);
		}
		index++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) == 1 || ft_strlen(base) == 0)
		return ;
	if (ft_strstr(base) == 1)
		return ;
	ft_recursive(nbr, base);
}
