all: agenci

agenci: main.o east.o west.o south.o north.o newagent.o distance.o
	clang -o agent main.o east.o west.o north.o south.o newagent.o distance.o -lm

clean:  ; rm -f *.o *~
