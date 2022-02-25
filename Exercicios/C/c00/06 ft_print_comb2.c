/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06 ft_print_comb2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:07 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/02/19 16:31:01 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(int nb)
{
	ft_putchar(48 + nb / 10);
	ft_putchar(48 + nb % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_numbers(a);
			write(1, " ", 1);
			ft_numbers(b);
			if ((a != 98) || (b != 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
