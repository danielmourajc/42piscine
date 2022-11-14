/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:56:38 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/26 17:26:47 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	is;
	int	it;

	is = 0;
	if (*to_find == '\0')
		return (str);
	while (str[is])
	{
		it = 0;
		while (str[is + it] == to_find[it])
		{
			it++;
			if (to_find[it] == '\0')
				return (&str[is]);
		}
		is++;
	}
	return (0);
}
