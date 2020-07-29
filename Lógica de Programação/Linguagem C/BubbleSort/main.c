#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i,cont, numero = 0;

    for(i =0; i<5; i++){
        printf("Digite um numero pra entrar no Vetor: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }
    printf("Vetor antes da Ordenacao!\n");
    for(i=0; i<5; i++){
        numero = vetor[i];
        printf("%d\n", numero);
    }
    cont = 1;
    while(cont > 0){
        cont = 0;
        for (i = 0; i <4; i++){
           if(vetor[i] > vetor[i+1]){
                numero = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = numero;
                cont = 1;
           }
        }
    }
    printf("Vetor depois da Ordenacao!\n");
    for(i=0; i<5; i++){
        numero = vetor[i];
        printf("%d\n", numero);
    }
    return 0;
}
