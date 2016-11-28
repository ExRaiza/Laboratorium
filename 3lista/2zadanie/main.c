#include "2.h"
#include <stdio.h>

int main(){
    double a,b,eps,x0;

    printf("Podaj lewą granice przedziału: ");
    scanf("%lf",&a);

    printf("Podaj prawą granice przedziału: ");
    scanf("%lf",&b);

    printf("Podaj epsilon: ");
    scanf("%lf",&eps);

    x0 = rozwiazanie(a,b,eps);

    printf("Pierwiastek = %lf\n",x0);

    return 0;
}
