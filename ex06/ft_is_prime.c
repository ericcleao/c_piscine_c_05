/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:36:00 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/09 10:47:03 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_is_prime(int nb)
{
	int i;
	int sqrt_nb;

	if (nb <= 1)
		return (0);
	i = 2;
	sqrt_nb = ft_sqrt(nb);
	while (i < sqrt_nb)
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
	while (i * i < nb && i * i >= aux)
	{
		aux = i * i;
		i++;
	}
	if (i * i == nb)
		return (i + 1);
	return (i);
}
