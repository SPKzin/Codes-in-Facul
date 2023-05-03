#include <stdio.h>

int main() {
   char op;
   double num1, num2, result;
   
   printf("Digite um operador (+, -, *, /): ");
   scanf("%c", &op);
   
   printf("Digite dois numeros separados por um espaco: ");
   scanf("%lf %lf", &num1, &num2);
   
   switch(op) {
      case '+':
         result = num1 + num2;
         break;
         
      case '-':
         result = num1 - num2;
         break;
         
      case '*':
         result = num1 * num2;
         break;
         
      case '/':
         result = num1 / num2;
         break;
         
      default:
         printf("Operador invalido!");
   }
   
   printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
   return 0;
}
