/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 12:26:27 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/07 15:08:54 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_ln;
	unsigned int	s_ln;

	d_ln = 0;
	s_ln = 0;
	while (dest[d_ln])
		d_ln++;
	while (src[s_ln])
		s_ln++;
	if (size <= d_ln)
		return (size + s_ln);
	i = d_ln;
	j = 0;
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (d_ln + s_ln);
}
