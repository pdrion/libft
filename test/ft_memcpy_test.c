/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:07:47 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/05 22:10:56 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}

/*void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int i;
	char *d;
	const char *s;

	d = dst;
	s = src;
	i = 0;
	while (i < n && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	if (i != n)
		d[i]= '\0';
	return(dst);
	}*/



int main(int argc, char **argv)
{
	if(argc >1)
	{
		printf("%s\n", argv[1]);
//		memcpy(argv[1],argv[2],atoi(argv[3]));
		ft_memcpy(argv[1],argv[2],atoi(argv[3]));
		printf("%s\n", argv[1]);
	}
	return (0);
}
