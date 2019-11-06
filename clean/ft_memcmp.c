/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:03:41 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:03:52 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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