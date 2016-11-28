#include "3.h"


int nwd(int a, int b){
    if(b==0)
        return a;
    else
		return nwd(b,a%b);
}

