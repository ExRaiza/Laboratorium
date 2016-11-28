#include "3.h"
#include <stdio.h>

int main(){
    int a;

    printf("Podaj liczbe: ");
    scanf("%d",&a);

    printf("Suma liczb względnie pierwszych z %d równa jest %d\n",a,phi(a));

    return 0;
}
