/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:30:33 by seerel            #+#    #+#             */
/*   Updated: 2024/09/02 19:28:31 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	lsep;
	int	result;

	result = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		result += j;
		i++;
	}
	lsep = sep_len(sep) * (size - 1);
	return (result + lsep);
}

void	copy_str(char *new, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	z = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			new[z++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				new[z++] = sep[j++];
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		y;

	if (size == 0)
		return (malloc(sizeof(char)));
	y = str_len(size, strs, sep);
	new = (char *)malloc(sizeof(char) * (y + 1));
	if (!new)
		return (NULL);
	copy_str(new, size, strs, sep);
	new[y] = '\0';
	return (new);
}
#include <stdio.h>
int main()
{
	char *new;
	char *strs[]={"şevval","ayşe","erel"};
	char *sep="-";
	
	new =ft_strjoin(3,strs,sep);
	if(new)
	{
	printf("%s",ft_strjoin(3,strs,sep));
	free(new);
	}
	
	return 0;
}