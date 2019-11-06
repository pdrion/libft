/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:33:40 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:01:15 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	unsigned int i;
	
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	while(i < n)
	{
		if(src1[i] != src2[i])
			return(src1[i] - src2[i]);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	if (argc > 3)
	{
		const void	*ar_1;
		const void *ar_2;
		size_t	ar_3;
		
		ar_1 = argv[1];
		ar_2 = argv[2];
		ar_3 = atoi(argv[3]);

		printf("la vraie fonction ; %d\n",memcmp(argv[1], argv[2],atoi(argv[3])));
		printf("ma fonction       ; %d\n",ft_memcmp(ar_1, ar_2, ar_3));
	}
	return (0);
}
