/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:14:46 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/23 13:25:50 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i < size)
	{
		a = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = a;
		size--;
		i++;
	}
}
