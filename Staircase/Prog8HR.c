#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

  int n, i, j;
// Digitar o tamanho da matriz que no caso do programa � 6.
  scanf("%d", &n);
// o la�o da matriz
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
// Como na quest�o pedida esse printf tem um operador tenario.
// esse operador � composto pela varivel > condi��o que � verdadeira ou falsa > se for verdadeira ir� imprimir o que est� depois
// da "?" se for falso ir� imprirmir o que est� depois do " : " � praticamente uma estrutura de decis�o.
      printf("%c", j >= n - i - 1 ? '#' : ' ');
    printf("\n");
  }

  return 0;
}

