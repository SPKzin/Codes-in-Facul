#include <stdio.h>// abertura de biblioteca
#include <stdlib.h>// abertura de biblioteca

int main() {// chamando a fun��o principal
    int num1, num2, num3; // decara��o das vari�veis int
    float media;// delcara��o da variavel float "media"

	    printf("Digite o primeiro numero: ");// solicita ao usu�rio um primeiro n�mero
	    scanf("%d", &numero1);// o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "num1"
  		
	    printf("Digite o segundo numero: ");// solicita ao usu�rio um segundo n�mero
	    scanf("%d", &numero2);// o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "num2"
  		
	    printf("Digite o terceiro numero: ");// solicita ao usu�rio um terceiro n�mero
	    scanf("%d", &numero3);// o n�mero solicitado ap�s recebido do usu�rio � gravado na vari�vel "num3"
  		

	    media = (numero1 + numero2 + numero3) / 3.0; // a soma dos tr�s n�meros solicitados ao usu�rio, e apos dividido por 2, � gravado na vari�vel "media"

	    printf("A media aritmetica dos numeros eh %.2f", media);// o computador imprime ao usu�rio o valor da vari�vel "media"

    system("pause");//pausa do programa
}
