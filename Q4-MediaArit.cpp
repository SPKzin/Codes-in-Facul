#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main() {// chamando a função principal
    int num1, num2, num3; // decaração das variáveis int
    float media;// delcaração da variavel float "media"

	    printf("Digite o primeiro numero: ");// solicita ao usuário um primeiro número
	    scanf("%d", &numero1);// o número solicitado após recebido do usuário é gravado na variável "num1"
  		
	    printf("Digite o segundo numero: ");// solicita ao usuário um segundo número
	    scanf("%d", &numero2);// o número solicitado após recebido do usuário é gravado na variável "num2"
  		
	    printf("Digite o terceiro numero: ");// solicita ao usuário um terceiro número
	    scanf("%d", &numero3);// o número solicitado após recebido do usuário é gravado na variável "num3"
  		

	    media = (numero1 + numero2 + numero3) / 3.0; // a soma dos três números solicitados ao usuário, e apos dividido por 2, é gravado na variável "media"

	    printf("A media aritmetica dos numeros eh %.2f", media);// o computador imprime ao usuário o valor da variável "media"

    system("pause");//pausa do programa
}
