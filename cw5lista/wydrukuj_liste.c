#include "node.h"
#include <stdio.h>

void wydrukuj_liste(List list){
  while(list != NULL){
    printf("%d ",list -> value);
    list = list -> next;
  }
}
