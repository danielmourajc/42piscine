/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:45:30 by rmarques          #+#    #+#             */
/*   Updated: 2022/01/16 14:31:27 by rmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{	
	int	li;
	int	col;

	li = 0;
	while (++li <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{	
			if (li == 1 || li == y)
			{
				if (col == 1 || col == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
