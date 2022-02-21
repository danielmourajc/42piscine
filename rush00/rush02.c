/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:40:45 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/15 20:40:51 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	li;

	li = 1;
	while (li <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && li == 1) || (col == x && li == 1))
				ft_putchar('A');
			else if ((col == x && li == y) || (col == 1 && li == y))
				ft_putchar('C');
			else if ((col == 1) || (col == x) || (li == 1) || (li == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		li++;
	}
}
