/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:26:14 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/26 17:18:25 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	is;

	id = 0;
	while (dest[id])
		id++;
	is = 0;
	while (src[is] && is < nb)
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[id] = '\0';
	return (dest);
}
