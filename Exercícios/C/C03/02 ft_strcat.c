/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:56:57 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/26 17:14:17 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	is;

	id = 0;
	while (dest[id])
	{	
		id++;
	}
	is = 0;
	while (src[is])
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = '\0';
	return (dest);
}
