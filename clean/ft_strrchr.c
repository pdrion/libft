/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:51:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 02:51:34 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			pos = &src[i];
		i++;
	}
	if (ch == '\0')
		return (&src[i]);
	return (pos);
}
