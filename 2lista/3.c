#include <stdio.h>

int main(void){
    double summ = 0;
    double i = 1;
    while(summ<10){
        summ+=1/i;
        i++;
    }
    printf("%f suma i %d najmniejsza liczba n\n",summ,(int) i);
}
