CC = gcc
CFLAGS = 
LDFLAGS =
SRC = main.c TreeFunctionality/insert.c TreeFunctionality/node_st.c TreeFunctionality/search.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = SourceCode

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)

BST.tgz:
	tar BST.tgz SourceCode

run: all
	./$(EXECUTABLE)