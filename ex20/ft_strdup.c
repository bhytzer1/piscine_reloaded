/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:12:04 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/06 23:27:59 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
    char *dest;
    int ctr1;
    int i; 
    
    if (!src)
        return (NULL);
    ctr1 = 0;
    while (src[ctr1])
        ctr1++;
    
    dest = (char *)malloc(sizeof(char) * (ctr1 + 1));
    if (!dest)
        return (NULL);

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(int ac, char **av)
{
    char *dup;

    if (ac != 21)
        return (1);
    dup = ft_strdup(av[1]);
    if (!dup)
        return (1);
    printf("%s", dup);
    free(dup);
    return (0);
}