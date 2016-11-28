
#include <stdio.h>

int main(void){
    int zloty;
    int grosz;
    int money;
    int bills[5] = {10,20,50,100,200}; 
    int how_manyB[5] = {0,0,0,0,0};
    int coins[9] = {1,2,5,10,20,50,100,200,500};
    int how_manyC[9] = {0,0,0,0,0,0,0,0,0};
    printf("Podaj liczbę złoty: ");
    scanf("%d", &zloty);
    printf("Podaj liczbę groszy: ");
    scanf("%d", &grosz);
    money = zloty + grosz/100;
    grosz -= (grosz/100)*100;
    while(money >= 10){
        for(int i=4;i>=0;i--){
            if(money>=bills[i]){
                money-=bills[i];
                how_manyB[i]++;
                i++;
            }
        }
    }
    money *= 100;
    money += grosz;
    while(money > 0){
        for(int i=8;i>=0;i--){
            if(money>=coins[i]){
                money-=coins[i];
                how_manyC[i]++;
                i++;
            }
        }
    }
    printf("Banknoty\n");
    for(int i=4;i>=0;i--){
        if(how_manyB[i]>0)
        printf("%d x %d zł\n",how_manyB[i],bills[i]);
    }
    printf("Monety\n");
    for(int i=8;i>=0;i--){
        if(how_manyC[i]>0 && coins[i]>=100){
            coins[i]/=100;
            printf("%d x %d zł\n",how_manyC[i],coins[i]);
            coins[i]*=100;
        }
        if(how_manyC[i]>0 && coins[i]<100)
            printf("%d x %d grosze\n",how_manyC[i],coins[i]);
    }
}
