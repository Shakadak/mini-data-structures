#ifndef DARRAY_H
# define DARRAY_H

# include <stddef.h>

typedef struct		s_darray
{
	void			*xs;
	size_t			capacity;
	size_t			used;
	size_t			x_size;
	double			gf;
}					t_darray;

t_darray			make_array(size_t x_size,
		size_t capacity,
		double growth_factor);
t_darray			darray_set_at(t_darray *a, size_t i, void *val);
void				*darray_get_at(t_darray a, size_t i);
t_darray			darray_expand(t_darray *a);
#endif
