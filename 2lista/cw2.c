#include <stdio.h>
#include <math.h>
int main(void){
    int n = 20;
    int tab[n];
    for(int i=0;i<n;i++){
    tab[i]=1;
    }
    for(int j=2;j<=sqrt(n);j++){
        for(int i=j+j;i<n;i=i+j){
        tab[i]=0;
        }
    }
    for(int i=2;i<n;i++){
    if(tab[i]==1) 
    printf("%d\n",i);
    }
}

