#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	float num; // declar��o da vari�vel float "num"
	
	printf("Informe um numero real: \n");// � solicitado usu�rio um n�mero
	scanf("%f", &num);// o n�mero recebido do usu�rio � gravado na vari�vel "num"
	
	printf("A conversao eh: %d \n", (int) num);// � imprimido pro usu�rio a convers�o do n�mero real para apenas sua parte inteira
	
	
	system("pause");// pausa do programa
}
