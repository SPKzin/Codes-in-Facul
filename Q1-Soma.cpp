#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	int a, b, c;// declara��o das variaveis inteiras
	
		printf("Digite um numero: \n");// imprime na tela solicitando um n�mero ao usu�rio
		scanf("%d", &a);// grava��o do n�mero solicitado ao usu�rio na vari�vel "a"
	
		printf("Digite outro numero: \n");//imprime na tela solicitando um segundo n�mero ao usu�rio
		scanf("%d", &b);// grava��o do segundo n�mero solicitado ao usu�rio na vari�vel "b"
		
		c=a+b;// atribuindo valor � variavel "c" com a adi��o das vari�veis "a" + "b"
	
		printf("O resultado eh: %d\n", c);// � imprimido na tela o resultado da soma das vari�veis
	
	system("pause");//pausa do programa
	
}
