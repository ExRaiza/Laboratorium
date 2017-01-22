all: masterMind

masterMind: main.o mastermind.h checkBalls.o
	clang -o masterMind main.o checkBalls.o

clean:
	rm -f *.o *~
