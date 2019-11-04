/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/04 17:22:24 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
	while (i < n && s[i] != uc && s[i] != '\0')
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
