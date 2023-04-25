#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	int num;// declaração da variavel inteira "num"
		printf("Digite um numero inteiro: \n");// é solicitado ao usuario que digite um numero 
		scanf("%d", &num);// o valor recebido do usuário é gravado na variável "num"
	
		printf("Tabuada de %d eh: \n", num);// é impresso na tela do usuario a tabuada do numero digitado
		for(int i=1;i<=10;i++){// declaração da função "for" para criar um laço de repetição
			printf("%d x %d = %d\n", num, i, num*i);// imprime na tela do usuario a tabuada
	}
	
	system("pause");// pausa do programa
}
