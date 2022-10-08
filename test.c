#include <stdio.h>
#include <stdlib.h>

char *ft_malloc(char *str)
{
	str = malloc(6);
	int i = 0;
	while (i < 50)
	{
		str[i] = 'a';
		i++;
	}
	printf("%s\n", str);
	printf("%p\n", str);
	return (str);
}

int	main(void)
{
	char *c;
	c = ft_malloc(c);
	printf("%s\n", c);
	printf("%p\n", c);
	free(c);
	char *b = "sdlfjewojoifjsldjfoiwjeojfikjd";
}
