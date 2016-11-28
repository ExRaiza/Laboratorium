#include <stdio.h>

int main(void){
    int h;
    printf("Please enter height of square\n");
    scanf("%d",&h);
    for(int i=0;i<h;i++){
        for(int j=0;j<2*h;j++){
        printf("*");
        }
    printf("\n");
    }
}

