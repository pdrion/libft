/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 22:50:04 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/16 00:25:00 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size_src;
	size_t size_dst;
	size_t size_new;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	size_new = 0;
	if (size_dst >= dstsize - 1 || dstsize == 0)
		return (size_src + dstsize);
	if (size_dst < dstsize - 1)
		size_new = dstsize - size_dst;
	ft_memcpy(dst + size_dst, src, size_new);
	dst[dstsize - 1] = '\0';
	return (size_src + size_dst);
}
