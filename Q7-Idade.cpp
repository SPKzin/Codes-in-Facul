#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	int idade; // declar�o da vari�verl inteira "idade"
	
		printf("Informe sua idade: \n");// � solicitado ao usu�rio sua idade
		scanf("%d", &idade);// o valor recebido � gravado na vari�vel "idade"
	
		if(idade >= 18){// o if identifica se o n�mero recebido � maior, igual ou menor do que o valor atribuido na vari�vel "idade"
		printf("Voce eh de maior");//se o valor da vari�vel for maior ou igual a 18, � impresso na tela que o usu�rio � maior de idade
		}else{
		printf("Voce eh de menor");//se o valor da vari�vel for menor que 18, � impresso na tela que o usu�rio � menor de idade
		}
	
	system("pause");// pausa do programa
}
