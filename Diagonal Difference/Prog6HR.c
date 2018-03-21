#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
// Eu fiz 2 programas. Esse primeiro o HACKERRANK não aceitou! Mas aceitou o segundo
// Primeiro programa.
/*
int main(){

	int n, matriz[10][10];
    int i, j, diagp = 0, diags = 0, d = 0;
// Informando o tamanho da matriz.
	scanf("%d", &n);

	for( i = 0; i < n; i++){
	   for(j = 0; j < n; j++){
           scanf("%d", &matriz[i][j]);
       }
     }
    for( i = 0; i < n; i++){
	   for(j = 0; j < n; j++){
           if(matriz[i] == matriz[j])
              diagp = diagp + matriz[i][j];
		  if(i + 1 == 3 - (j + 1) + 1)
              diags = diags + matriz[i][j];
       }
    }
d = abs(diagp - diags);
printf("%d\n", n);
 for( i = 0; i < n; i++){
	   for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
	   }
	    printf("\n");
 }

printf("\n%d", d);
return 0;
            }
            */

 // Aceitou esse segundo
 // Segundo programa.
int main(){

    int matriz[10][10];
    int n, diagp = 0, diags = 0,i ,j , sum=0;
// Informa o tamanho da matriz
    scanf("%d", &n);
// Informa os valores da matriz
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
// Faz a soma da diagonal principal
    for(i = 0;i < n; i++)
         diagp = diagp + matriz[i][i];
// Faz a soma da diagonal secundaria
    for(i = 0; i < n; i++)
         diags = diags + matriz[i][n-1-i];
// A soma das 2 diagonal! O abs significa valor absoluto. Nesse calculo o sum iria dá -15 com o abs irá dar o valor
// absoluto indepedente do sinal que fica 15
    sum = abs(diagp-diags);
    printf("%d",sum);
return 0;
                 }

