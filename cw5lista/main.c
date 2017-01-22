#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){
  List list = malloc(sizeof(struct Node));
  list = NULL;
  int a = 1;

  while(a != 0){
      printf("Wpisz liczbe do dodania ");
      scanf("%d",&a);
      dopisz_niemalejaco(&list,a);
  }

  int b = 1;
  while(b != 0){
     printf("Podaj wartosc do usuniecia ");
     scanf("%d",&b);
     usun(&list,b);
  }

  wydrukuj_liste(list);
}
