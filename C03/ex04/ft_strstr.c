/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seerel <seerel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:26:06 by seerel            #+#    #+#             */
/*   Updated: 2024/08/24 19:45:26 by seerel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *find)
{
    int i; 
    int j; 

    i = 0; 
    if (find[0] == '\0') 
        return (str); 
		
    
    while (str[i]) 
    {
        j = 0; 
        while (str[i + j] == find[j] && str[i + j] && find[j]) 
        {
            if (find[j + 1] == '\0') 
                return (&str[i]); 
            
            j++; 
        }
        i++; 
    }
    return (0); 
}

