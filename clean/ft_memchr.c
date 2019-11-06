/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:32:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 00:32:15 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	char			*src;
	
	uc = c;
	src = (char *)s;
	while(n-- && src != 0)
	{
		if (*src == uc)
			return(src);
		src++;
	}
	return (NULL);
}
