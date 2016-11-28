#include <stdio.h>

int find2(int x, int n, int t[n]){
int i = 0;
int j = n-1;
int c;

while(i<=j){
    c = (i+j)/2;
    if(x == t[c])
        return c;
    if(x < t[c])
        j = c - 1;
    else
        i = c + 1;
}
    return -1;
}

int main(){
    int tab[] = {1,3,4,6,7,9,10,11,14,16,17};
    int a;
    for(int i=0;i<11;i++){
        printf("%d ",tab[i]);
    }
    scanf("%d",&a);
    printf("%d na miejscu %d\n",a,find2(a,11,tab));
    return 0;
}
