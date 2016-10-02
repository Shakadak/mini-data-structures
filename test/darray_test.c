#include "inc/darray.h"

int	main(void)
{
	t_darray	a;
	int			v;

	a = darray_make(sizeof(int), 5, 2.0);
	v = 1;
	darray_push(&v, &a);
	v = 2;
	darray_push(&v, &a);
	v = 3;
	darray_push(&v, &a);
	v = 4;
	darray_push(&v, &a);
	v = 5;
	darray_push(&v, &a);
	v = 6;
	darray_push(&v, &a);
	v = 7;
	darray_push(&v, &a);
}
