	
all: connections

connections: main.o my_mat.a
	gcc -Wall -g -o connections main.o my_mat.a

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

my_mat.a: main.o my_mat.o
	ar -rcs my_mat.a main.o my_mat.o

.PHONY:clean all
clean:
	rm -f *.o *.a connections