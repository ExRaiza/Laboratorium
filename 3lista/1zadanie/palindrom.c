#include "1.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool palindrom(char napis[]){
    int length = strlen(napis) - 1;

    for(int i = 0; i < length/2; i++){
        if(napis[i]!=napis[length-i])
            return false;
    }

    return true;
}
