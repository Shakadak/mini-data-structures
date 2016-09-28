#ifndef ARRAY_H
# define ARRAY_H

# include <stddef.h>

typedef struct 		s_array
{
	void*			xs;
	size_t			capacity;
	size_t			x_size;
}					t_array;

#endif
