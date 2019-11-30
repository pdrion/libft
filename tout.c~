}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:19:31 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/30 16:04:53 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *new_list;
  t_list *n;

  new_list = NULL;
  while (lst)
  {
    if(!(n = ft_lstnew(f(lst -> content))))
      ft_lstdelone(lst, del);
    else
      ft_lstadd_back(&new_list, n);
    lst = lst -> next;
  }
  return (new_list);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 08:17:08 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/28 08:39:26 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
  t_list	*list;
  t_list	*n;

  list = NULL;
  n = NULL;
  if(!(n = malloc(sizeof(t_list))))
    return (NULL);
  n -> content = content;
  n -> next = NULL;
  list = n;

  return (list);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:06:40 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/28 11:35:05 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int		i;
  t_list	*tmp;

  tmp = NULL;
  i = 0;
  if (lst)
    {
     tmp = lst;
     while (tmp)
       {
	tmp = tmp -> next;
	i++;
       }
    }
 return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 19:31:24 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	char			*s;

	i = 0;
	d = dst;
	s = (char *)src;
	while (i < n && (i == 0 || s[i - 1] != (char)c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == (char)c)
		return (d + i);
	else
		return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:32:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 21:20:26 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
	}
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:03:41 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 14:36:16 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:07:47 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 19:14:53 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:50:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 21:08:21 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	char	*lasts;
	char	*lastd;

	i = 0;
	d = dst;
	s = (char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:45:44 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 14:38:27 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;

	uc = b;
	while (len-- > 0)
		*uc++ = (unsigned char)c;
	return (b);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:33:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 18:56:49 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:07:11 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 19:11:25 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
  if (s && fd)
    {
      ft_putstr_fd(s, fd);
      ft_putchar_fd('\n', fd);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:13:39 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/28 08:16:41 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
   unsigned int nb;

   nb = 0;
   if (n < 0)
      ft_putchar_fd('-', fd);
   nb = (n < 0 ? -n : n);
   if (nb > 9)
      ft_putnbr_fd(nb / 10, fd);
   ft_putchar_fd(nb % 10 + '0', fd);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:57:34 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 18:59:41 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
  while(*s)
    ft_putchar(*s++, fd);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:57:34 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 19:05:52 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
  if (s && fd)
    {
      while(*s)
	{
	  ft_putchar_fd(*s++, fd);
	}
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:53:12 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 16:20:53 by testpdrion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(char const *s, char c)
{
  unsigned int count;

  count = 0;
  while (*s)
    {
      while (*s && *s == c)
	   s++;
      if (*s && *s != c)
	{
	  count++;
	  while (*s && *s != c)
	    s++;
	}
    }
  return(count);
}

char *ft_malloc_words(char const *s, char c)
{
  char *word;
  unsigned int i;

  i = 0;
  while (s[i] && s[i] != c)
    i++;
  if(!(word = (char *)malloc(sizeof(char) * (i + 1))))
    {
      free (word);
      return (NULL);
    }
  i= 0;
  while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
  return(word);
}

char **ft_split(char const *s, char c)
{
	unsigned int i;
	char **result;

	if (s == NULL)
	  return (NULL);
	i = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
	  {
	      free (result);
	    return (NULL);
	    }
  while (*s)
    {
      while (*s && *s == c)
	   s++;
      if (*s && *s != c)
	{
	  result[i] = ft_malloc_words(s, c);
	    i++;
	  while (*s && *s != c)
	    s++;
	}
    }
  result[i] = NULL;
  return(result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:36:18 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 14:39:07 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	char	ch;
	char	*src;

	ch = (char)c;
	src = (char *)s;
	while(*src != '\0')
	{
		if (*src == ch)
			return(src);
		src++;
	}
	if (ch == '\0')
		return (src);
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <philippedrion@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:40:37 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/23 19:13:43 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
  char *dst;
  dst = NULL;
  if ((dst = (char *)malloc(ft_strlen(s1) + 1)) == NULL)
    return (NULL);
  ft_memcpy(dst, s1, ft_strlen(s1));
  dst[ft_strlen(s1)] = '\0';
 return (dst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <philippedrion@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:29:42 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/25 14:36:28 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(result = (char*)malloc(sizeof(*result) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
	    return(NULL);
	while (*s1 != '\0')
		result[i++] = *s1++;
	while (*s2 != '\0')
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 22:50:04 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/16 00:25:00 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size_src;
	size_t size_dst;
	size_t size_new;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	size_new = 0;
	if (size_dst >= dstsize - 1 || dstsize == 0)
		return (size_src + dstsize);
	if (size_dst < dstsize - 1)
		size_new = dstsize - size_dst;
	ft_memcpy(dst + size_dst, src, size_new);
	dst[dstsize - 1] = '\0';
	return (size_src + size_dst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:26:04 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/25 16:09:13 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t size_src;
	size_t size_new;

	if (src == NULL)
	  return (0);
	size_src = ft_strlen(src);
	size_new = 0;
	if (dstsize == 0)
		return (size_src);
	if (size_src >= dstsize)
		size_new = dstsize - 1;
	else
		size_new = size_src;
	ft_memcpy(dst, src, size_new);
	dst[size_new] = '\0';
	return (size_src);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:11:15 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 21:24:28 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:26:00 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/27 18:30:50 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *result;
  unsigned int i;

  i = 0;
  result = NULL;

  if (s && f)
    {
      if(!(result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
	return (NULL);
      while (s[i])
	{
	  result[i] = f(i, s[i]);
	  i++;
	}
      result[i] = '\0';
      return(result);
    }
  return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:10:30 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 14:40:13 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 00:39:01 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/25 16:15:50 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  unsigned int cmp;
  unsigned int i;

  i = 0;
  cmp = 0;
  if (len == 0 || needle[cmp] == '\0')
      return ((char *)haystack);

   while (haystack[i] && len--)
      {
	cmp = 0;
	while (haystack[i + cmp] != '\0' && haystack[i + cmp] == needle[cmp] && len + 1 - cmp)
	  {
	    if (needle[cmp + 1] == '\0')
	      return ((char *)haystack + i);
	    cmp++;
	  }
	i++;
      }
  return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:51:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 14:40:42 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <pdrion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:49:09 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/25 16:16:50 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
char	*ret;
	size_t	len;
	if (s1== NULL || set ==NULL)
	  return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
	  len--;
  if (!(ret = (char*)malloc(sizeof(*ret) * (len + 2))))
	    return(NULL);

  ret = ft_memcpy(ret, s1, len + 1);
 ret[len + 1] = '\0';
 return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <philippedrion@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 14:11:30 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/25 14:27:51 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  size_t size;
  char *result;

  i = 0;
  if (!s)
    return (NULL);
  if (ft_strlen(s) < start)
    return (ft_strdup(""));
  size = ft_strlen(s + start);
  if (size < len)
    len = size;
  if (!(result = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/p*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:10:43 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 16:27:40 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:06:30 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 16:27:07 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
	if (c >= 'a' && c <='z')
		return (c - 32);
	return (c);
}
