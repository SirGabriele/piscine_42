/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:33:24 by kbrousse          #+#    #+#             */
/*   Updated: 2022/03/02 13:31:18 by kbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			a;

	i = 0;
	j = 0;
	a = ft_strlen(dest);
	while (dest[i + j] != '\0' && src[j] != '\0'
		&& j < size - ft_strlen(dest) - 1)
	{
		(dest[i + j]) = src[j];
		j++;
	}
	return (a + ft_strlen(src));
}
