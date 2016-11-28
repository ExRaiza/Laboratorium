#include "agents.h"
#include <math.h>

double distance(struct agent a1, struct agent a2){
	int x1 = a1.x;
	int y1 = a1.y;
	int x2 = a2.x;
	int y2 = a2.y;
	return (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}
