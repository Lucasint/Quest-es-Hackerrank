#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
// Declaramos esse tipo diferente de viariavel int, quando usaremos um numero grande como a quest„o pedida.
 long long int array[10] ,numero ,i , sum=0;
// Quando voc  usa a variavel "int" vocÍ usa o "%d" a variavel long long it, voc  usar· "%lld" È assim que lemos long long int.
    scanf("%lld",&numero);
// Aqui eu vou digitar os numeros grandes para armazenar no meu vetor
    for(i = 0; i < numero; i++)
        scanf("%lld",&array[i]);
// Aqui eu somarei todos eles.
    for(i = 0; i < numero; i++)
        sum += array[i];
// Imprimindo na tela o valor da soma.
    printf("%lld", sum);
    return 0;
}



