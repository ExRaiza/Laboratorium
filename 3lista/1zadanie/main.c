#include "1.h"
#include <stdio.h>
#include <stdbool.h>

int main(){
    char napis[50];

    printf("Wpisz słowo by sprawdzić czy jest palindromem: ");
	 scanf("%s",napis);

    if(palindrom(napis))
        printf("Jest palindromem\n");
    else
        printf("Nie jest palindromem\n");

    return 0;
}
