#include <stdio.h>

int main(void){
    int h;
    printf("Please enter height of christmas tree\n");
    scanf("%d",&h);
    for(int i=0;i<h;i++){
        for(int j=i;j<h-1;j++){
        printf(" ");
        }
        for(int k=0;k<(i+1)*2-1;k++){
        printf("*");
        }
    printf("\n");
    }
}
