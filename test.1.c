void	ft_add(char *s)
{
	char *a = s;
	int	i = 0;

	for (i = 0; i < 5; i++)
		a[i] = 'a';
}

#include <stdio.h>
int	main(void)
{
	char s[6] = "hello";

	printf("%s\n", s);
	ft_add(s);
	printf("%s\n", s);
}
