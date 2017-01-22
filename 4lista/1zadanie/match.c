#include "wzorzec.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int findPosition(char *wzorzec, char *lancuch, int c){
   int x = -1;
   bool found = false;
   int lengthW = strlen(wzorzec);
   int lengthL = strlen(lancuch);

   if(lengthW == 0){
      return 1;
   }

   for(int i = c; i < lengthL; i++){
      if(lengthL - i >= lengthW)
         for(int j = 0; j < lengthW && i+j < lengthL; j++){
            //printf("%c %c %d \n", wzorzec[j], lancuch[i+j], i);
            if(wzorzec[j] == lancuch[i+j] || wzorzec[j] == '?')
               found = true;
            else{
               found = false;
               break;
         }
      }
      if(found){
         x = i;
         break;
      }
   }
   return x;
}

bool match(char *wzorzec, char *lancuch){
   int lengthL = strlen(lancuch);
   int lengthW = strlen(wzorzec);
   int i = 0,j = 0;
   int x = 0;
   bool IsStar = false;
   char betweenStars[50] = "";


   for(int i = 0; i < lengthW; i++){
      if(wzorzec[i] == '*')
         IsStar = true;
   }

   if(lengthW != lengthL && !IsStar)
      return false;

   if(!IsStar)
      for(int i = 0; i < lengthW; i++){
         if(wzorzec[i] != lancuch[i] && wzorzec[i] != '?')
            return false;
      }
   else{
      while(i < lengthW){
         memset(&betweenStars[0], 0, sizeof(betweenStars));
         x = 0;

         if(wzorzec[i] != lancuch[j] && wzorzec[i] != '?' && wzorzec[i] != '*'){
            return false;
         }

         else if(wzorzec[i] == '*'){
            if(i == lengthW - 1)
               return true;
            i++;

            while(i < lengthW && wzorzec[i] != '*'){
               betweenStars[x] = wzorzec[i];
               i++;
               x++;
            }
            if(findPosition(betweenStars, lancuch, j) < 0){ //i - strlen(betweenStars) - count
               printf("ale jak to %s %d!?", betweenStars, j);
               return false;
            }
         }

         else{
            i++;
            j++;
         }
      }
      if(findPosition(betweenStars, lancuch, lengthL - strlen(betweenStars)) < 0){
         printf("Co jest nie tak\n");
         return false;
      }
   }

   return true;
}
