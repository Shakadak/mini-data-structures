ARRAY	:=	array.c

OBJ := $(OBJ) $(ARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRARRAY)/%.c
	$(COMPIL)
