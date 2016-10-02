#include "inc/darray.h"
#include <stdio.h>

int	main(void)
{
	t_darray	a;
	int			v;
	int			i;

	a = darray_make(sizeof(int), 5, 2.0);
	printf("a.capacity: %zu\n", a.capacity);
	printf("a.used: %zu\n", a.used);
	i = 0;
	while (i++ < 50)
	{
		v = i;
		darray_push(&v, &a);
		printf("a.capacity: %zu\n", a.capacity);
		printf("a.used: %zu\n", a.used);
	}
}
