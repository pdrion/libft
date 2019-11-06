/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:50:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/05 23:50:40 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;
	
	i = 0;
	d = dst;
	s = (char *)src;
	if (d[n - 1] && n != 0)
	{
		while (i < n)
		{
			*d++ = s[i];
			i++;
		}
	}
	else if (n != 0)
	{
		while (*d != 0)
			*d++ = s[i++];
		i = 0;
		while (s[i])
			*++d = s[i++];
	}
	return (dst);
}
