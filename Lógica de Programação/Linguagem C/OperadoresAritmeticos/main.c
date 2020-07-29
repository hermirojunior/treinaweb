#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;

    printf("Digite o valor do Primeiro Numero: ");
    scanf("%d", &numero1);
    printf("Digite o valor do Segundo Numero: ");
    scanf("%d", &numero2);

    printf("%d + %d = %d \n", numero1, numero2, numero1 + numero2 );
    printf("%d - %d = %d \n", numero1, numero2, numero1 - numero2 );
    printf("%d X %d = %d \n", numero1, numero2, numero1 * numero2 );
    printf("%d / %d = %d \n", numero1, numero2, numero1 / numero2 );
    printf("O resto de %d dividido %d e %d \n", numero1, numero2, numero1%numero2);

    return 0;
}
