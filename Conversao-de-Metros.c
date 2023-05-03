#include <stdio.h>

int main(){
	float metros, dec, cent, mili;
	
	printf("Digite um valor em metros: \n");
	scanf("%f", &metros);
	
	dec=metros*10;
	cent=metros*100;
	mili=metros*1000;
	
	printf("O valor de %.f em decimetros eh: %.f\n O valor em centimetros eh: %.f\n O valor em milimetros eh: %.f\n",metros, dec, cent, mili);
}
