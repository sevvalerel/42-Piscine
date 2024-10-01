/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:20:42 by seerel            #+#    #+#             */
/*   Updated: 2024/09/02 15:16:14 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size] != '\0')
		size++;
	new = (char *)malloc((size + 1) * sizeof(char));
	if (!(new))
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
#include <stdio.h>

int main(void)
{
   char *src = "şevval erel";
   char *new;
   new = ft_strdup(src);
   printf("%s",new);
return (0);
}