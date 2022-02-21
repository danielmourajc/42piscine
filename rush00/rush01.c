/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:41:56 by rmarques          #+#    #+#             */
/*   Updated: 2022/01/16 15:24:18 by rmarques         ###   ########.fr       */
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
				ft_putchar('/');
			else if ((col == 1 && li == y) || (col == x && li == 1))
				ft_putchar('\\');
			else if ((col == 1) || (col == x) || (li == 1) || (li == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		li++;
	}
}
