#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main(){// chamando a função principal
	float cel, fah;// declaração das variaveis float "cel" e "fah"

	    printf("Digite a temperatura em graus Celsius: "); // é solicitado ao usuário o valor da temperatura em celsius
	    scanf("%f", &cel);// o valor recebido do usuário é gravado na variável "cel"

	    fah=(cel*1.8)+32;// é feita a equação de conversão pelo computador, e após feita, é gravado o resultado na variável "fah"

	    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.", cel, fah);// é impresso na tela do usuário a conversão de graus celsius para fahrenheit
	

    system("pause");// pausa do programa
}
