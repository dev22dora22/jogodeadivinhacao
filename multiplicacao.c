#include <stdio.h>

// Atividade:Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) eimprima o resultado da multiplicação entre essas duas variáveis //;

int main() {
  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
}