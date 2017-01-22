all: 2zadanie

2zadanie: main.o usun.o wydrukuj_liste.o dopisz_niemalejaco.o node.h
	clang -o lista usun.o main.o wydrukuj_liste.o dopisz_niemalejaco.o

clean:
	rm -f *.o *~
