#include <stdio.h>
#include <stdlib.h>
// Usaremos define aqui para definir o valor desse MAX_STRING, sempre seja o valor que está a sua direita.
#define MAX_STRING 100

int main() {
//Usaremos char, pos se trata de strings e strings é um conjunto de caractere e string vai receber o tamanho define lá de cima.
  char string[MAX_STRING], ch;
//Informa a palavra. obs: usaremos %s porque é o comando de ler strings
  scanf("%s", &string);
  int i;
  int total = 1;
// Aqui o laço vai contrar caractere por caractere que o usuario informou acima.
  for (i = 0; i < MAX_STRING; i++) {
// quem vai receber essa contagem é a variavel ch.
    ch = string[i];
// Se ch for igual a fim de string vai parar, enquanto não for vai pegar os caracteres
    if (ch == '\0')
// aqui é a parada
      break;
// Como no if acima ele vai pegando os caracteres até não haver mais, aqui usarem uma função no C chama "isupper" que ler todo
// caractere maisculo digitado que no caso, todo caractere maiusculo digitado que está armazenado na variavel "ch".
    if (isupper(ch))
// E esses caracteres maiusculos vai ser armazenados na variavel total que era 1 como na questão pedida
      total++;
  }
  // imprimos a quantidade de caracteres maiusculo da palavra digitado + 1
  printf("%d", total);
}
