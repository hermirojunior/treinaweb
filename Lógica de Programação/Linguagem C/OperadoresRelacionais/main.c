#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    // 0 = FALSE
    // 1 = TRUE
    printf("%d e maior que 10? %d \n", num, num > 10);
    printf("%d e maior ou igual que 10? %d \n", num, num >= 10);
    printf("%d e menor que 10? %d \n", num, num <= 10);
    printf("%d e menor ou igual que 10? %d \n", num, num <= 10);
    printf("%d e igual a 10? %d \n", num, num == 10);
    printf("%d e diferente a 10? %d \n", num, num != 10);

    int var = 2 + 3 * 4 / 5 - 6;
    printf("%d", var);

    return 0;
}
