#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	int num, ant, suc;// declaração das variáveris inteiras
	
		printf("informe um numero: \n"); // solicita ao usuário um número
		scanf("%d", &num);// o número recebido do usuário é gravado na variável "num"
	
		ant=num-1;// é feita a subtração do número recebido do usuário por 1, e após isso, é feita a gravação do resultado na variável "ant"
		suc=num+1;// é feita a adição do número recebido do usuário por 1, e após isso, é feita a gravação do resultado na variável "suc"
	
		printf("O numero que antecede o informado eh: %d, E oque Sucede eh: %d \n", ant, suc);// é impresso na tela do usuário o valor gravado variável "ant" e "suc"
	
	system("pause");// pausa do programa
}
