all: root

root: f.o main.o rozwiazanie.o
	clang -o root rozwiazanie.o main.o f.o -lm

clean:
	rm -f *.o *~
