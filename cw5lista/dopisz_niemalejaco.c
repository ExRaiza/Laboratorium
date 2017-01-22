#include "node.h"
#include <stdlib.h>

void dopisz_niemalejaco(List *ptr, int i){
  List new = malloc(sizeof(struct Node));
  new -> value = i;
  new -> next = NULL;
  List curr = *ptr;
  List prev = NULL;

  if(curr == NULL){
    *ptr = new;
    return;
  }
  else if(curr -> value >= i){
    new -> next = curr;
    *ptr = new;
  }
  else{
    while(curr != NULL && curr -> value < i){
      prev = curr;
      curr = curr -> next;
      }
    new -> next = curr;
    prev -> next = new;
  }
}
