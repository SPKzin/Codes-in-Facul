#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){ // chamando a fun��o principal
	float pi=3.14, raio, area;// declara��o e atribui��o de valor � vari�vel "pi" e declara��o das variav�is "raio" e "area"
	
		printf("Informe o valor do raio: \n");// solicita ao usu�rio o diametro do circulo
		scanf("%f", &raio);// imprime na vari�vel raio
	
		area= pi*raio*raio;// atribuindo o valor da variavel "area" com a multiplica��o das variaveis "pi" e "raio"
		printf("A area do circulo eh: %.2f \n", area);// � impresso na tela do usu�rio o valor da �rea do circulo
	
	system("pause");//pausa do programa
	
}
