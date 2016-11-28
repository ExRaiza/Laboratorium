#include <stdio.h>
#include <assert.h>
int main(void){
    unsigned int num;
    int how_many = 0;
    printf("Podaj liczbę całkowitą bez znaku: ");
    scanf("%u",&num);
    assert(num>0);
    while(num > 0){
        if(num%2==1){
            how_many++;
        }
        num/=2;
    }
    printf("Liczba jedynek w binarnej reprezentacji wynosi: %d\n",how_many);
}
