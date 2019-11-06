/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:37:07 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 02:46:46 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*src;
	char	*pos;
	int i;

	ch = (char)c;
	src = (char *)s;
	pos = NULL;
	i = 0;
	while(src[i] != '\0')
	{
		if (src[i] == ch)
		{
			pos = &src[i];
		}
		i++;
	}
	if (ch == '\0')
	{
		return (&src[i]);
	}
	return (pos);
}

int main (int argc, char **argv)
{
	if (argc > 2)
	{
		const void	*ar_1;
		int		ar_2;
		
		ar_1 = argv[1];
		ar_2 = atoi(argv[2]);

		printf("la vraie fonction : %s\n",strrchr(argv[1], atoi(argv[2])));
		printf("ma fonction       :%s\n",ft_strrchr(ar_1, ar_2));
	}
	return (0);
}
