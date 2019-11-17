/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:28:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/16 00:42:41 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
int main (int argc, char **argv)
{
	char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s1, max);
	char *i2 = ft_strnstr(s1, s1, max);
	printf("Good result: %s \n", *i1);
	printf("My result:", *i2);
}
