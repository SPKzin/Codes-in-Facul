#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	char nome[50];// declaração da variavel charachter "nome" com espaço de 50 caracteres
	int idade;// declaração da variavel inteira "idade"
	
		printf("Digite seu nome; \n");// é solicitado ao usuario que digite seu nome
		scanf("%s", &nome);// o nome informado pelo usuário é gravado na variável "nome"
	
		printf("Digite sua idade: \n");// é solicitado ao usuario que digite sua idade
		scanf("%d", &idade);// a idade informada pelo usuário é gravado na variável "idade"
	
		printf("Ola, %s como voce esta? Tudo bem? Seja muito bem vindo, voce tem %d anos?", nome, idade);// é impresso na tela do usuario uma saudação que cita seu nome e idade
	
	system("pause");// pausa do programa
}
