/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:13:30 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 12:21:53 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if ( power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power -1));
    
}

#include <stdio.h>
int main(void)
{
    int nbr;
    int pwr;

    nbr = 5;
    pwr = 3;
    printf("%d to the %d is %d \n", nbr, pwr, ft_recursive_power(nbr, pwr));
}
