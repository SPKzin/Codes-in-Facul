#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	int a, b, c;// declaração das variaveis inteiras
	
		printf("Digite um numero: \n");// imprime na tela solicitando um número ao usuário
		scanf("%d", &a);// gravação do número solicitado ao usuário na variável "a"
	
		printf("Digite outro numero: \n");//imprime na tela solicitando um segundo número ao usuário
		scanf("%d", &b);// gravação do segundo número solicitado ao usuário na variável "b"
		
		c=a+b;// atribuindo valor á variavel "c" com a adição das variáveis "a" + "b"
	
		printf("O resultado eh: %d\n", c);// é imprimido na tela o resultado da soma das variáveis
	
	system("pause");//pausa do programa
	
}
