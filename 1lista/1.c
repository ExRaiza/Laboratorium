#include <stdio.h>

int main(void){
	int length = 11;
	char tab[11] = {'A','B','R','A','K','A','D','A','B','R','A'};
	for(int i=0;i<length;i++){
		for(int j=0;j<i;j++){
		printf(" ");
		}
		for(int k=0;k<length-i;k++){
		printf("%c ",tab[k]);
		}
	printf("\n");
	}
	return 0;
}
