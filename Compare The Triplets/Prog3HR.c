#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// fiz dessa forma o Hackerrank não aceitou!
int main() {

int alice[3], bob[3], i;
// Declaro os 3 valores de cada um.
    for(i = 0; i < 3; i++){
    scanf("%d", &alice[i]);
    }
    for(i = 0; i < 3; i++){
    scanf("%d", &bob[i]);
    }
 // Os pontos de cada um.
    int pontos_alice = 0;
    int pontos_bob = 0;
// Dando a saida 1 1 para alice e bob.
    for(i = 0; i < 3; i++){
            if(alice[i] > bob[i]) {
                pontos_alice++;
            }
            if(bob[i] > alice[i]) {
                pontos_bob++;
            }
}
    printf("\n%d %d", pontos_alice, pontos_bob);
}
// Aceitou essa porque era o pedido:

    int alice[3];
    int bob[3];
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);

    int pontos_alice = 0;
    int pontos_bob = 0;

    for (int i = 0; i < 3; i++) {
      if (alice[i] > bob[i])
        pontos_alice++;
      if (bob[i] > alice[i])
        pontos_bob++;
    }
    printf("%d %d\n", pontos_alice, pontos_bob);
    return 0;
}

