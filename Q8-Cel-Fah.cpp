#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a fun��o principal
	float cel, fah;// declara��o das variaveis float "cel" e "fah"

	    printf("Digite a temperatura em graus Celsius: "); // � solicitado ao usu�rio o valor da temperatura em celsius
	    scanf("%f", &cel);// o valor recebido do usu�rio � gravado na vari�vel "cel"

	    fah=(cel*1.8)+32;// � feita a equa��o de convers�o pelo computador, e ap�s feita, � gravado o resultado na vari�vel "fah"

	    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.", cel, fah);// � impresso na tela do usu�rio a convers�o de graus celsius para fahrenheit
	

    system("pause");// pausa do programa
}
