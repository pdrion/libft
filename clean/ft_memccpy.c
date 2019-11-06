/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/05 21:55:55 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;
	
	i = 0;
	d = dst;
	s = (char *)src;
	while (i < n && (i == 0 || s[i - 1] != c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == c)
		return (d + i);
	else
		return (NULL);
}
