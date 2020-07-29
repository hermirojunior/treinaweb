#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int menor, maior = 1;
    for(int i = 0; i < n; i++){

        if(array[i] > maior){
            maior = array[i];
         }else if (array[i] < menor){
             menor = array[i];
         }
    }
    printf("%d\n",maior);
    printf("%d\n",menor);
    return 0;
}
