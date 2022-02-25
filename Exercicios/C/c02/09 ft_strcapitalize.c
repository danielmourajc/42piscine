/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:05:17 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/25 14:43:48 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
			str[i] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '	')
				str[i] = str[i] - 32;
			if (str[i - 1] >= '!' && str[i - 1] <= '/')
				str[i] = str[i] - 32;
			if (str[i - 1] >= ':' && str[i - 1] <= '@')
				str[i] = str[i] - 32;
			if (str[i - 1] >= '[' && str[i - 1] <= '`')
				str[i] = str[i] - 32;
			if (str[i - 1] >= '{' && str[i - 1] <= '~')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
