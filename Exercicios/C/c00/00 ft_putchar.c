/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00 ft_putchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:03:24 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/02/28 20:45:39 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
