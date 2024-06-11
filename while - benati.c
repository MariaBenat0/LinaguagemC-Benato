#include <stdio.h>

int main() {

  int numeroTabuada; //declara��o de variavel
  char continuar; //declara��o de variavel


  do { //fa�a isso...
    printf("Digite o numero para ver a tabuada: "); //digitar numero para a tabuada
    scanf("%d", &numeroTabuada); //leitura p/ guardar na variavel


    if (numeroTabuada == 0) { //condi��o
      break; // Sair do loop se o usu�rio digitar 0
    }


    printf("\nTabuada de %d:\n", numeroTabuada); // inicio da exibi��o da tabuada

    for (int i = 1; i <= 10; i++) { //la�o de repeti��o
      printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada * i); // exibir com la�o de repeti��o
    }

    printf("\nDeseja ver outra tabuada? (s/n): "); // defini��o para funcionamento do while, � aqui que vai adicionar 's' ou 'n'
    scanf(" %c", &continuar);

    //...enquanto (while) continuar dizendo 'S' ou 's' continuar a repetir todo o codig acima caso contrario, finalizar.
  } while (continuar == 's' || continuar == 'S');


  printf("Programa finalizado.\n");// caso a resposta por 'n' ou qualquer outra coisa

  return 0;
}

