#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum = 0;

    //Onde definimos o tamanho do vetor, que não questão N é 6.
    scanf("%d", &n);
    int array[n], i;
    //Nesse 1º laço recebe os valores do vetor que vai até N = 6.
    for(int i = 0; i < n; i++){
       scanf("%d",&array[i]);
    }
    // Nesse 2º laço iremos somar o valores  digitados no vetor e jogar na variavel sum.
    for(int i = 0; i < n; i++){
         sum = sum + array[i];
    }
    // Aqui imprimimos o valor da soma.
    printf("%d", sum);
}
