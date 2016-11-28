#include <stdio.h>
#include <assert.h>
int main(void){
    int n;
    double average;
    printf("Podaj ilość liczb ");
    scanf("%d",&n);
    assert(n>0);
    int tab[n];
    for(int i=0;i<n;i++){
       scanf("%d",&tab[i]);
       average+=tab[i];
    }
    printf("Średnia arytmetyczna tych liczb: %f\n",average/n);
}
