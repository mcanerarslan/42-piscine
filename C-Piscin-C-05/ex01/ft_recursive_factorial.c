/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:35:49 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 10:36:32 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
        return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int main()
{
    int number;
    
    number = 3;
    printf("Factorial of %d is %d \n", number, ft_recursive_factorial(number));
}
