#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Digite o valor do numero 1: ");
    scanf("%d", &num1);

    printf("Digite o valor do numero 2: ");
    scanf("%d", &num2);

    printf("%d > 10 E %d > 20? %d\n", num1,num2, num1 > 10 && num2 > 20); // OPERADOR AND

    printf("%d > 10 OU %d > 20? %d\n", num1,num2, num1 > 10 || num2 > 20); // OPERADOR OR

    printf(" NAO %d > 10 E %d > 20? %d\n", num1,num2, !(num1 > 10 && num2 > 20) ); // OPERADOR NOT
    printf(" NAO %d > 10 OU %d > 20? %d\n", num1,num2, !(num1 > 10 || num2 > 20)); // OPERADOR NOT

    return 0;

}
