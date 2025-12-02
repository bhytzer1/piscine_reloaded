/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:38:30 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/02 22:58:03 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	indice;

	indice = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (indice * indice < nb)
	{
		indice++;
	}
	if (indice * indice > nb)
		return (0);
	if (indice == nb)
		return (indice);
	return (indice);
}
