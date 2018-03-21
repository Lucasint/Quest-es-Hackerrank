#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

// Declaramos as variaveis horas, minutos e segundos
  int h, m, s;
// variavel char pra dizer se é am ou pm
  char am_ou_pm = 0;
// Inserido a hora
  scanf("%d:%d:%d%c", &h, &m, &s, &am_ou_pm);
// imprimindo a hora convertida. Se a hora passar de 12 a variavel h vai ser subtraida por 12, depois somado com 12. Se
// ela for menor que 12 vai continuar com o mesmo valor a variavel h, e depois somado com 12.

  printf("%02d:%02d:%02d", h + 12 , m, s);
  return 0;
}

