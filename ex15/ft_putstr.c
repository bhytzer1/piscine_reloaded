/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:46:28 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/05 14:56:40 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// int main()
// {
// 	char *i = "bingobongo\n";

// 	ft_putstr(i);
// 	write(1, &i, 1);
// }