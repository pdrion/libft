

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