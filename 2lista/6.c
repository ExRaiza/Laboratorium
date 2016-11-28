

#include <stdio.h>

int ideal_number(int n){
    int sum=1;
    for(int i=2;i<n;i++){
        if(n%i==0)
            sum+=i;

    }
    return sum;
}

int main(void){
    int tab[1000];

    for(int i=0;i<=1000;i++)
        tab[i]=0;

    for(int i=0;i<=1000;i++){
        int ideal = ideal_number(i);
        if(ideal==i && i > 1){
            printf("Liczba idealna: %d\n",i);
        }
        tab[i]=ideal;
    }

    for(int i=1;i<500;i++){
        int x = tab[i];
        if(tab[x]==i && x!=i){
            printf("Para liczb zaprzyjaźnionych: %d i %d \n",i,x);
        }
    }
}
