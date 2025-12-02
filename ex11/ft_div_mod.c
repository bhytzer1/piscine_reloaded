/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:18:56 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/02 19:34:03 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>

// int main()
// {
//     int i;
//     int b;
//     int div;
//     int mod;
    
//     i = 30;
//     b = 7;
//     ft_div_mod(i, b, &div, &mod);
//     printf("%d, %d", div, mod);
// }