#include <stdio.h>
#include <math.h>

int main(void){

    float a;
    float b;
    float c;
    printf("Please enter a\n");
    scanf("%f",&a);
    printf("Please enter b\n");
    scanf("%f",&b);
    printf("Please enter c\n");
    scanf("%f",&c);
    float delta = b*b-4*a*c;
    if(a==0)
        printf("Linear equation %fx+%f\n",b,c);
    else{
        if(delta<0)
        printf("No roots\n");
        if(delta==0)
        printf("1 root: %f\n",-b/a);
        if(delta>0)
        printf("2 roots: %f %f\n",(-b+sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
    }

    return 0;
}
