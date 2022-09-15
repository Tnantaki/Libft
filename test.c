void	ft_add(int a, int b)
{
	int *c = &a;

	c = c + b;
	a = a + b;
}

#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 6;

	ft_add(a, b);
	printf("%d", a);
}
