#include "3.h"

int phi(long int n){
    int suma = 1;

    for(int i=2;i<n;i++){
        if(nwd(i,n)==1)
            suma++;
    }

    return suma;
}
