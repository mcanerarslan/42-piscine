/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:42:23 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/05 19:12:32 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (((c >= 97 && c <= 122)))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
#include <string.h>
#include <stdio.h>
int main(void){

	char name[6] = "caner";
	printf("%s \n", ft_strupcase(name));
}
