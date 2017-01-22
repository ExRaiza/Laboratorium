#include <stdio.h>
#include "mastermind.h"

int main(){
   short balls[4] = {1, 1, 1, 1};
   short black = 0, white = 0, counter = 2;
   short right[4] = {0, 0, 0, 0};

   while(black != 4 && counter < 10){
      for(int i = 0; i < 4; i++)
         printf("[%hd] ", balls[i]);
      printf("    ");
      for(int i = 0; i < 4; i++)
         printf("[%hd] ", right[i]);
      printf("\nIle kul jest na właściwym miejscu o odpowiednim kolorze? Ile kul ma tylko dobry kolor?\n");
      scanf("%hd %hd", &black, &white);

      checkBalls(balls, black, white, right, counter);
      counter++;
   }
   return 0;
}
