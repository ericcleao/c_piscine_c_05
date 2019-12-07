/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:56:29 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/05 18:23:11 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt_nb;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	sqrt_nb = ft_sqrt(nb);
	while (i < sqrt_nb + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int aux;
	int i;

	aux = 0;
	i = 0;
	while (i * i <= nb && i * i >= aux)
	{
		aux = i * i;
		i++;
	}
	if (i * i < aux)
	{
		return (i - 1);
	}
	return (i);
}
