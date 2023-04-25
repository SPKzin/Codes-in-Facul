#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	int idade; // declarão da variáverl inteira "idade"
	
		printf("Informe sua idade: \n");// é solicitado ao usuário sua idade
		scanf("%d", &idade);// o valor recebido é gravado na variável "idade"
	
		if(idade >= 18){// o if identifica se o número recebido é maior, igual ou menor do que o valor atribuido na variável "idade"
		printf("Voce eh de maior");//se o valor da variável for maior ou igual a 18, é impresso na tela que o usuário é maior de idade
		}else{
		printf("Voce eh de menor");//se o valor da variável for menor que 18, é impresso na tela que o usuário é menor de idade
		}
	
	system("pause");// pausa do programa
}
