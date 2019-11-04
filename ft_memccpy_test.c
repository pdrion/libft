/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/04 17:21:22 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	uc;
	char			*d;
	const char		*s;
	int				i;

	i = 0;
	d = dst;
	s = src;
	uc = (unsigned char)c;
	printf("%c\n", uc);
	while(i < n && s[i] != uc && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == uc)
		d[i] = s[i];
	else if (s[i] == '\0' && i != n + 1)
		d[i] = '\0';
	return (dst);
	
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n",argv[1]);
		memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
//		ft_memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
			printf("%s\n",argv[1]);
	}
	return (0);
}
