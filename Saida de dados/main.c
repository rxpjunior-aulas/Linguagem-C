#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 10;
    float num2 = 20.5;
    double num3 = 32.654;
    char letra= 'x';
    char palavra[10] = "Batata";

    /*O identificador % é responsavel por informar o tipo de saida
      %c - Caracter
      %s - String
      %d - Inteiro
      %f - Float ou Double
    */
    printf("Dado salvo na variavel num1: %d\n", num1); // Exibindo uma unica saida
    printf("Dado salvo na variavel num2: %f\n", num2); //Exibindo uma unica saida
    printf("Dado salvo na variavel num3: %f\n", num3); //Exibindo uma unoica saida
    printf("Dado salvo na variavel letra: %c, e salvo na na variavel palavra: %s\n",letra, palavra); //Multiplas exibicoes
    return 0;
}
