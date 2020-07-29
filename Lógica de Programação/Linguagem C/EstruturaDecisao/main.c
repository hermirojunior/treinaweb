#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
O desafio pede que você entre com dois valores (a e b) e que, no intervalo entre estes valores, verifique se os números atendem as condições:

1- Se o número for maior ou igual a 1 e menor ou igual a 9 exiba o número por extenso;
2- Se o número for maior que 9 e par, imprima no console a palavra "par";
3- Se o número for maior que 9 e ímpar, imprima no console a palavra "ímpar".

Dica: Para percorrer o intervalo de números entre a e b você pode utilizar um for que inicia em a e termina em b. Exemplo: for (int i = a; i < b; i++)
*/


int main(void){
    int n=35419;

    int i;
    for(i=0; n > 0; i++){
        n/=10;
    }
    printf("%d", i);
    return 0;
}





        /*
    int numero = 0;
    int resultado = 0;

    printf("Digite o numero da tabuada: \n");
    scanf("%d", &numero);

    printf("A tabuada escolhida foi a do %d \n", numero);

    for(int i = 0; i<= 10; i++){
        printf("%d X %d = %d \n", numero, i, (numero*i));
    }



    char nome = "";
    while(strcmp(&nome, "PARAR")!=0){
        printf("Digite um nome: \n");
        scanf("%s", &nome);
        printf("Ola, %s tudo bem?\n",&nome);
    }
    */


