/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 00:39:01 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/16 02:55:41 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*begin_needle;
	char	*str;
	size_t	i;

	begin_needle = (char *)needle;
	str = (char *)haystack;
	i = 0;
	if (*begin_needle == '\0')
		return (str);
	while (*str && i < len)
	{
		begin_needle = (char *)needle;
		while (*begin_needle++ == *str++ && i++ < len)
		{
			if (i < len - 1 && *begin_needle == '\0')
				return (str - (int)ft_strlen(needle));
			else if (i == len -1 && *begin_needle == '\0' && *str == '\0')
				return (str - (int)ft_strlen(needle));
		}
	}
	return (NULL);
}
