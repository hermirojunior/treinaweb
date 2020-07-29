#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c;

  printf("Digite o primeiro lado do Triangulo:  ");
  scanf("%d", &a);

  printf("Digite o segundo lado do Triangulo:  ");
  scanf("%d", &b);

  printf("Digite o terceiro lado do Triangulo:  ");
  scanf("%d", &c);

 if((a==b) && (b==c)){
    printf("O triangulo e Equilatero. ");
 }else if ((a != b) && (b!=c) && (a!=c)){
    printf("O triangulo e Escaleno. ");
 }else{
    printf("O triangulo e Isoceles. ");
 }

  return 0;
}
