/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:41:16 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/15 20:48:36 by dmoura-d         ###   ########.fr       */
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
			if ((col == 1 && li == 1) || (col == x && li == y))
				ft_putchar('A');
			else if ((col == x && li == 1) || (col == 1 && li == y))
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
