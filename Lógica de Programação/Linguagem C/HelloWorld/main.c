#include <stdio.h>
#include <stdlib.h>

int main(void){

    char nome[100];
    printf("Digite uma palavra");
    scanf("%[^\n]%*c", nome);

    int numero = 0;

    printf("Digite um numero");
    scanf("%d", &numero);

    printf("O nome informado foi: %s\n", nome);
    printf("O numero informado foi: %d", numero);
    return 0;
}
