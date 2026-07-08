/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:38:39 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 10:59:36 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int sum;

    i = 1;
    sum = 1;
    if ((nb == 0 && power == 0))
    {
        return (1);
    }
    while (i <= power)
    {
        sum *= nb;
        i++;
    }
    return (sum);
}

#include <stdio.h>
int main(void)
{
    int nbr;
    int pwr;

    nbr = 5;
    pwr = 3;
    printf("%d to the %d is %d \n", nbr, pwr, ft_iterative_power(nbr, pwr));
}
