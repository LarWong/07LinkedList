all: driver.o list.o
	gcc driver.o list.o

driver.o: driver.c list.h
	gcc -c driver.c

list.o: list.c list.h
	gcc -c list.c

run:
	./a.out

clean:
	rm -f *.out *~ *.o

