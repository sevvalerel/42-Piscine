/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:22:55 by seerel            #+#    #+#             */
/*   Updated: 2024/09/02 15:23:42 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rng;
	int	i;

	if (min >= max)
		return (NULL);
	rng = (int *)malloc((max - min) * sizeof(int));
	if (!(rng))
		return (NULL);
	i = 0;
	while (min < max)
	{
		rng[i] = min;
		min++;
		i++;
	}
	return (rng);
}
#include <stdio.h>
int main()
{
	int min=40;
	int max=50;
	int i = 0;
	
	int *dest =ft_range(min,max);
	while(min<max)
	{
		printf("%d",dest[i]);
		min++;
		i++;
	}
	
}
