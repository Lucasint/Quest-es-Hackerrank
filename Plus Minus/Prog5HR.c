#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
// Informar o numero de elementos que há no vetor
    scanf("%d", &n);
// Declara a variavel vetor e i.
    int array[10], i;
// Digita os numeros que o vetor irá armazenar
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
}
// Declaro as variaveis de numero positivo, negativo e o 0.
    float n_pos = 0.0, n_neg = 0.0, n_zer = 0.0;
// A variavel j vai receber o valor de n que foi informado lá em cima.
    float j = n;
// Declaramos a variavel ponteiro que aponta para o endereço de memoria que está armazenado os valores do vetor.
    int *arrayponteiro = array;
// enquanto n-- > 0 ou seja 5 > 0 vai executar as instruções abaixo até varrer todos os valores.
    while (n-- > 0){
// Se arrayponteiro for positivo ele vai adicionar + 1 na variavel n_pos
        if(*arrayponteiro > 0)
            n_pos++;
// Se não for positivo ele vai adicionar + 1 na variavel n_neg.
    else if (*arrayponteiro < 0)
            n_neg++;
// Se não for nem um nem outro vai ser igual a 0 e vai adicionar + 1 a variavel n_zer.
    else
            n_zer++;
// aqui vai varrengo valor por valor até passar do numero informado de valores no vetor.
    arrayponteiro++;
}
// printamos na tela o problema pedido, numeros positivos, negativos e numero = 0. Vai pegar a quantidade de cada e vai dividir
// pelo total de elementos que há no vetor, exemplo: Como na questão pedida há 3 numeros positivos, 2 negativos e 1 numero igual a 0
// vai ser: 3 dividido por 6, 2 dividido por 6 e 1 dividido por 6, respectivamente.
printf("%f\n%f\n%f\n", n_pos / j, n_neg / j, n_zer / j);
// main é int e retorna um valor inteiro.
return 0;
}
