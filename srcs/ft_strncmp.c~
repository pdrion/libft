/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:10:30 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 03:10:37 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
