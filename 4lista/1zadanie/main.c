#include "wzorzec.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
   char first[50] = "";
   char wzorzec[25] = "";

   printf("Wprowadź słowo do sprawdzenia: ");
   scanf("%s",first);
   printf("Wprowadź wzorzec: ");
   scanf("%s",wzorzec);

   bool compatibility = match(wzorzec, first);
   printf("Jest ok: %d\n",compatibility);
   return 0;
}
