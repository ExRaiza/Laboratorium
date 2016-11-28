#include <stdio.h>
#include <math.h>

int main(void){
    double i;
    double sum = 1;
    for(i=1;i<=1000;i++){
        sum*=pow(i,0.001);
    }
    printf("Przybliżenie pow(1000!,0.001) równa się: %f\n",sum);

}
