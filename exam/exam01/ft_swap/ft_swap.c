/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:11:14 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/15 12:52:01 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 99;

    ft_swap(&a,&b);
    printf("%d, %d", a, b);
}
