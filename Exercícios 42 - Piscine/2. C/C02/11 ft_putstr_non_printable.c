/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:12:09 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/25 18:12:03 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char c)
{
	char	*h;

	h = "0123456789abcdef";
	ft_putchar(h[c / 16]);
	ft_putchar(h[c % 16]);
}

int	ft_printable(unsigned char c)
{
	if (c >= ' ' && c <= 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			hex(str[i]);
		}
		i++;
	}
}
