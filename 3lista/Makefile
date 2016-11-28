# Makefile
CC=clang
CFLAGS=-Wall --pedantic -std=c11
LDFLAGS=-lm

all: pali root phi agenci

pali: pali.o palif.o ; clang -o pali pali.o palif.o

pali.o: pali.c ;  clang -c pali.c

palif.o: palif.c ; clang -c palif.c

root: root.o rozwiazanie.o f.o ; clang -o root root.o rozwiazanie.o f.o -lm

root.o: root.c ; clang -c root.c

rozwiazanie.o: rozwiazanie.c ; clang -c rozwiazanie.c
o
f.o: f.c ; clang -c f.c -lm

phi: nwd.o fEulera.o phi.o ; clang -o phi nwd.o fEulera.o phi.o

nwd.o: nwd.c ; clang -c nwd.c

fEulera.o: fEulera.c ; clang -c fEulera.c

phi.o: phi.c ; clang -c phi.c

agenci: agent.o east.o west.o south.o north.o newagent.o distance.o  ; clang -o agent agent.o east.o west.o north.o south.o newagent.o distance.o -lm

agent.o: agent.c ; clang -c agent.c

east.o: east.c ; clang -c east.c

west.o: west.c ; clang -c west.c

north.o: north.c ; clang -c north.c

south.o: south.c ; clang -c south.c

newagent.o: newagent.c ; clang -c newagent.c

distance.o: distance.c ; clang -c distance.c

clean: ; rm -f *.o *~

