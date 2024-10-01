/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:48:00 by seerel            #+#    #+#             */
/*   Updated: 2024/08/24 18:54:26 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcat(char *dest, char *src) 
{
	int	x; 

	x = 0; 
	while (dest[x]) 
		x++; 
		
	int y = 0; 
	while (src[y]) 
	{
		dest[x + y] = src[y]; 
		y++; 
	}
	dest[x + y] = '\0'; 
	return (dest); 
}
