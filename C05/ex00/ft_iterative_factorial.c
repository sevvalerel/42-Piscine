/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:03:43 by seerel            #+#    #+#             */
/*   Updated: 2024/08/27 17:05:14 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int b)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (b < 0)
		return (0);
	if (b == 0)
		return (1);
	while (i <= b)
	{
		res *= i;
		i++;
	}
	return (res);
}
