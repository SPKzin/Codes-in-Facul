#include <stdio.h>

int main(){
	int dec;
	float hex, oct;
	
	printf("Informe um numero decimal: \n");
	scanf("%d", &dec);
	
	hex=dec/16;
	oct=dec/8;
	
	printf("O valor %d em Hexadecimal eh: %.2f\n O valor em Octal eh: %.2f", dec, hex, oct);
}
