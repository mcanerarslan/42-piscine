/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:48:47 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 10:34:28 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int fct;
    int i;

    i = 1;
    fct = 1;
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        fct *= i;
        i++;
    }
    return (fct);
}

#include <stdio.h>
int main(void)
{
    int number;

    number = 5;
    printf("Factorial of %d is %d \n", number, ft_iterative_factorial(number));
}
