/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:53:00 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 03:10:05 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t				i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while(i < n && c1[i] != '\0' && c2[i] != '\0')
	{
		if (c1[i] != c2[i])
			return(c1[i] - c2[i]);
	i++;
	}
	return (c1[i] - c2[i]);
}

int main (int argc, char **argv)
{
	if (argc > 2)
	{
		const void	*ar_1;
		const void	*ar_2;
		int		ar_3;
		
		ar_1 = argv[1];
		ar_2 = argv[2];
		ar_3 = atoi(argv[3]);

		printf("la vraie fonction : %d\n",strncmp(argv[1],argv[2], atoi(argv[3])));
		printf("ma fonction       : %d\n",ft_strncmp(ar_1, ar_2, ar_3));
	}
	return (0);
}
