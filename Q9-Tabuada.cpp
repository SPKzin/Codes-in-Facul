#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	int num;// declara��o da variavel inteira "num"
		printf("Digite um numero inteiro: \n");// � solicitado ao usuario que digite um numero 
		scanf("%d", &num);// o valor recebido do usu�rio � gravado na vari�vel "num"
	
		printf("Tabuada de %d eh: \n", num);// � impresso na tela do usuario a tabuada do numero digitado
		for(int i=1;i<=10;i++){// declara��o da fun��o "for" para criar um la�o de repeti��o
			printf("%d x %d = %d\n", num, i, num*i);// imprime na tela do usuario a tabuada
	}
	
	system("pause");// pausa do programa
}
