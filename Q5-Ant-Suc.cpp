#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	int num, ant, suc;// declara��o das vari�veris inteiras
	
		printf("informe um numero: \n"); // solicita ao usu�rio um n�mero
		scanf("%d", &num);// o n�mero recebido do usu�rio � gravado na vari�vel "num"
	
		ant=num-1;// � feita a subtra��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "ant"
		suc=num+1;// � feita a adi��o do n�mero recebido do usu�rio por 1, e ap�s isso, � feita a grava��o do resultado na vari�vel "suc"
	
		printf("O numero que antecede o informado eh: %d, E oque Sucede eh: %d \n", ant, suc);// � impresso na tela do usu�rio o valor gravado vari�vel "ant" e "suc"
	
	system("pause");// pausa do programa
}
