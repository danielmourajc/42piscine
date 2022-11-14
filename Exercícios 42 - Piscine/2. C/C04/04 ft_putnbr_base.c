/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:07:45 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/01/27 15:46:33 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	a;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		a = i + 1;
		while ((base[i] != base[a]) && base[a])
			a++;
		if (base[i] == base[a])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	cb;

	if (!check(base))
		return ;
	n = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	cb = ft_strlen(base);
	if (n < cb)
		ft_putchar(base[n % cb]);
	else
	{
		ft_putnbr_base(n / cb, base);
		ft_putnbr_base(n % cb, base);
	}
}
