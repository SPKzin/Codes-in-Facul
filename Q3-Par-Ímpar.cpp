#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	int numero; // declara��o da vari�vel "numero"
	
  		printf("Digite um numero inteiro: ");// solicita ao usu�rio um numero inteiro
		scanf("%d", &numero);// o n�mero recebido do usu�rio � gravado na vari�vel "numero"

   		if(numero % 2 == 0) {// equa��o para identificar se o n�mero � par ou impar, utilizando da divis�o do n�mero informado pelo usu�rio  por 2, e identificando sua natureza pela sobra do resultado
        printf("%d eh um numero par", numero);// se a sobra do divis�o for 0, o programa imprime ao usu�rio que esse n�mero � par
   		} else {
        printf("%d eh um numero impar", numero);// se a sobra for qualquer n�mero diferente de 0, o programa imprime ao usu�rio que esse n�mero � impar
   		}

    system("pause");// pausa do programa
}
