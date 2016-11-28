#include "2.h"
#include <math.h>
#include <stdio.h>

double rozwiazanie(double a, double b, double eps){
    double c;

    if(f(b)*f(a)>0){
        printf("Funkcja nie spełnia założeń \n");
        return 0;
    }

    if(f(a)==0)
		return a;
    if(f(b)==0)
		return b;

    while(fabs(f(b)-f(a))>eps){
        c = (a + b)/2;

        if(f(c)==0)
            return c;
        if(f(a) * f(c)<0)
            b=c;
        if(f(b) * f(c)<0)
            a=c;
    }

    return c;
}
