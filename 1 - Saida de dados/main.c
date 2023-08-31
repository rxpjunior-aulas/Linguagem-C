#include <stdio.h>
#include <stdlib.h>

//SAIDA DE DADOS
/*OBSERVAÇÕES
Comando de saida: printf
Simbolo de quebra de linha: \n (contra barra + letra n)
Simbolo de atribuicao: = (simbolo de igualdade)
*/
int main()
{
    //Declaração de Variáveis
    int num1 = 10; //Tipo inteiro já com atribuição
    float num2 = 20.5; //Tipo Float
    double num3 = 32.654; //Tipo Double
    char letra= 'x'; //Caracteres (um unico caracter)
    char palavra[10] = "Batata"; // Cadeia de caracteres, String

    /*O identificador % é responsavel por informar o tipo de saida
      %c - Caracter
      %s - String
      %d - Inteiro
      %f - Float ou Double
    */
    printf("Dado salvo na variavel num1: %d\n", num1); // Exibindo uma unica saida
    printf("Dado salvo na variavel num2: %f\n", num2); //Exibindo uma unica saida
    printf("Dado salvo na variavel num3: %f\n", num3); //Exibindo uma unoica saida
    //Multiplas exibicoes
    printf("Dado salvo na variavel letra: %c, e salvo na na variavel palavra: %s\n",letra, palavra);
    return 0;
}
