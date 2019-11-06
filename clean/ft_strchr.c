/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:36:18 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 02:49:55 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	char	ch;
	char	*src;
	
	ch = (char)c;
	src = (char *)s;
	while(*src != '\0')
	{
		if (*src == ch)
			return(src);
		src++;
	}
	if (ch == '\0')
		return (src);
	return (NULL);
}
