#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	float num; // declarção da variável float "num"
	
	printf("Informe um numero real: \n");// é solicitado usuário um número
	scanf("%f", &num);// o número recebido do usuário é gravado na variável "num"
	
	printf("A conversao eh: %d \n", (int) num);// é imprimido pro usuário a conversão do número real para apenas sua parte inteira
	
	
	system("pause");// pausa do programa
}
