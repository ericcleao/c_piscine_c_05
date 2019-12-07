/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:38:39 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/05 12:13:04 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				signal;
	unsigned int	result;
	int				i;
	unsigned int	aux;

	if (nb == 0)
		return (1);
	signal = 1;
	if (nb < 0)
		signal *= -1;
	result = nb * signal;
	i = result - 1;
	while (i >= 1)
	{
		aux = result;
		result *= i;
		if (aux > result)
			return (0);
		i--;
	}
	return (signal * result);
}
