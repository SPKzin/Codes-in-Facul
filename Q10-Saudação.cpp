#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	char nome[50];// declara��o da variavel charachter "nome" com espa�o de 50 caracteres
	int idade;// declara��o da variavel inteira "idade"
	
		printf("Digite seu nome; \n");// � solicitado ao usuario que digite seu nome
		scanf("%s", &nome);// o nome informado pelo usu�rio � gravado na vari�vel "nome"
	
		printf("Digite sua idade: \n");// � solicitado ao usuario que digite sua idade
		scanf("%d", &idade);// a idade informada pelo usu�rio � gravado na vari�vel "idade"
	
		printf("Ola, %s como voce esta? Tudo bem? Seja muito bem vindo, voce tem %d anos?", nome, idade);// � impresso na tela do usuario uma sauda��o que cita seu nome e idade
	
	system("pause");// pausa do programa
}
