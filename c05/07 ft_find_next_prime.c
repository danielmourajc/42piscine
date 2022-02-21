/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:34:26 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/29 19:41:55 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		i++;
	}
	if (c == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
