#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

  int n, i, j;
// Digitar o tamanho da matriz que no caso do programa é 6.
  scanf("%d", &n);
// o laço da matriz
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
// Como na questão pedida esse printf tem um operador tenario.
// esse operador é composto pela varivel > condição que é verdadeira ou falsa > se for verdadeira irá imprimir o que está depois
// da "?" se for falso irá imprirmir o que está depois do " : " é praticamente uma estrutura de decisão.
      printf("%c", j >= n - i - 1 ? '#' : ' ');
    printf("\n");
  }

  return 0;
}

