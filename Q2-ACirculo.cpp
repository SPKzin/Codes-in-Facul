#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){ // chamando a função principal
	float pi=3.14, raio, area;// declaração e atribuição de valor á variável "pi" e declaração das variavéis "raio" e "area"
	
		printf("Informe o valor do raio: \n");// solicita ao usuário o diametro do circulo
		scanf("%f", &raio);// imprime na variável raio
	
		area= pi*raio*raio;// atribuindo o valor da variavel "area" com a multiplicação das variaveis "pi" e "raio"
		printf("A area do circulo eh: %.2f \n", area);// é impresso na tela do usuário o valor da área do circulo
	
	system("pause");//pausa do programa
	
}
