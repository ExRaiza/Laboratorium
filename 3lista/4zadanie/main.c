#include "agents.h"
#include <stdio.h>

int main(){
	struct agent Bob = newagent(0,0);
	struct agent Norb = newagent(3,3);

	north(&Bob);
	south(&Norb);
	west(&Norb);
	north(&Bob);
	east(&Bob);
	south(&Norb);

	printf("%f\n",distance(Bob,Norb));
	return 0;
}
