/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 14:45:25 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/05 14:56:29 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}


// int main()
// {
// 	char *i = "caleido";
	
// 	printf("%d\n", ft_strlen(i));
// }