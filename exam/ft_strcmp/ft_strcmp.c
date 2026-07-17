/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:42:49 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/14 15:51:06 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return ((unsigned)s1[i] - (unsigned)s2[i]);
}

#include <stdio.h>
int main(void)
{
    char text1[] = "caner";
    char text2[] = "canex";

    printf("%d", ft_strcmp(text1,text2));
}
