#include "node.h"
#include <stdlib.h>

void usun(List *ptr, int i){
   List curr = *ptr;
   List prev = NULL;

   if(curr == NULL)
      return;
   else if(curr -> value == i){
      while(curr -> value == i && curr != NULL){
         (*ptr) = curr -> next;
         free(curr);
         curr = (*ptr);
      }
   }
   else{
      prev = curr;
      curr = prev -> next;
      while(curr != NULL){
         if(curr -> value == i){
            prev -> next = curr -> next;
            free(curr);
            curr = prev -> next;
         }
         else{
            prev = curr;
            curr = curr -> next;
         }
      }
   }
}
