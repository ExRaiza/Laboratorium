#include "mastermind.h"
#include <stdio.h>
#include <stdbool.h>

short howMany(short right[4]){
   short a = 0;
   for(int i = 0; i < 4; i++)
      if(right[i] == 1)
         a++;
   return a;
}

void complete(short right[4], short balls[4], short counter){
   for(int i = 0; i < 4; i++)
      if(right[i] == 0)
         balls[i] = counter;
}

void checkBalls(short balls[4], short black, short white, short right[4], short counter){
   printf("%hd\n", counter);
   bool clear = true;
   short good = howMany(right);
   for(int i = 0; i < 4; i++){
      if(right[i] != 0)
         clear = false;
   }

   if(black == 0 && white == 0){
      complete(right, balls, counter);
   }
   if(black > 0 && clear){
      int i = 0;

      while(i < black){
         right[i] = 1;
         i++;
      }
      while(i < 4){
         balls[i]++;
         i++;
      }
   }

   if(black > good && white == 0 && !clear){
      for(int i = 0; i < black; i++)
         right[i] = 1;

      complete(right, balls, counter);
   }

   if(good == black + white)
   if(good > black){
      int i = 0, k = 0;
      while(i < 4){
         if(right[i] == 1)
            k++;
         if(k == black + 1)
            break;
         i++;
      }
      balls[i+1] = balls[i];
      right[i] = 0;
      right[i+1] = 1;
      complete(right, balls, counter);
   }

}
