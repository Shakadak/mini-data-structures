DARRAY	:=	darray_basic.c \
			darray_mem.c

OBJ := $(OBJ) $(DARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRDARRAY)/%.c
	$(COMPIL)
