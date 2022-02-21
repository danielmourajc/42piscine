/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:30:24 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/26 18:54:23 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	is;
	unsigned int	id;
	unsigned int	cs;
	unsigned int	cd;

	is = 0;
	id = 0;
	while (dest[id])
	{
		id++;
	}
	cd = id;
	cs = ft_strlen(src);
	if (size == 0 || size <= cd)
	{
		return (cs + size);
	}
	while (src[is] && is < size - cd - 1)
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id] = '\0';
	return (cd + cs);
}
