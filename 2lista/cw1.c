#include <stdio.h>
#include <string.h>
int pali(char * str);
int main(void){
    int n = 2321;
    int a = 1;
    char * word;
    sprintf(word,"%d",n);
    a = pali(word);
    printf("%d\n",a);
}

int pali(char * str){
    int l = strlen(str)-1;
    for(int i=0;i<(l/2);i++){
        if(str[i]!=str[l-i])
        return 0;
    }
    return 1;
}
