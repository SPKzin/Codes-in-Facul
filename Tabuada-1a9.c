#include <stdio.h>

int main(){
	int num, i;
	
	for(i=1;i<=9;i++){
		for(num=1;num<=10;num++){
			printf("%d x %d = %d   ", num, i, num*1);
		}
		printf("\n\n");
	}
	return 0;
}
