/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 20:41:55 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/02 21:21:40 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;

    if(nb < 0)
        return(0);
    else if(nb == 0)
    {
    return(1);
    }

    result = 1;
    while(nb > 1)
    {
        result = result * nb;
        nb--;
    }

    return(result);
}

// #include<stdio.h>

// int main()
// {
//     int i = 4;

//     i = ft_iterative_factorial(4);
//     printf("%d\n", i);
// }