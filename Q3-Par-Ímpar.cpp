#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	int numero; // declaração da variável "numero"
	
  		printf("Digite um numero inteiro: ");// solicita ao usuário um numero inteiro
		scanf("%d", &numero);// o número recebido do usuário é gravado na variável "numero"

   		if(numero % 2 == 0) {// equação para identificar se o número é par ou impar, utilizando da divisão do número informado pelo usuário  por 2, e identificando sua natureza pela sobra do resultado
        printf("%d eh um numero par", numero);// se a sobra do divisão for 0, o programa imprime ao usuário que esse número é par
   		} else {
        printf("%d eh um numero impar", numero);// se a sobra for qualquer número diferente de 0, o programa imprime ao usuário que esse número é impar
   		}

    system("pause");// pausa do programa
}
