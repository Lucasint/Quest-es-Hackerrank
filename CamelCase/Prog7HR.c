#include <stdio.h>
#include <stdlib.h>
// Usaremos define aqui para definir o valor desse MAX_STRING, sempre seja o valor que est� a sua direita.
#define MAX_STRING 100

int main() {
//Usaremos char, pos se trata de strings e strings � um conjunto de caractere e string vai receber o tamanho define l� de cima.
  char string[MAX_STRING], ch;
//Informa a palavra. obs: usaremos %s porque � o comando de ler strings
  scanf("%s", &string);
  int i;
  int total = 1;
// Aqui o la�o vai contrar caractere por caractere que o usuario informou acima.
  for (i = 0; i < MAX_STRING; i++) {
// quem vai receber essa contagem � a variavel ch.
    ch = string[i];
// Se ch for igual a fim de string vai parar, enquanto n�o for vai pegar os caracteres
    if (ch == '\0')
// aqui � a parada
      break;
// Como no if acima ele vai pegando os caracteres at� n�o haver mais, aqui usarem uma fun��o no C chama "isupper" que ler todo
// caractere maisculo digitado que no caso, todo caractere maiusculo digitado que est� armazenado na variavel "ch".
    if (isupper(ch))
// E esses caracteres maiusculos vai ser armazenados na variavel total que era 1 como na quest�o pedida
      total++;
  }
  // imprimos a quantidade de caracteres maiusculo da palavra digitado + 1
  printf("%d", total);
}
