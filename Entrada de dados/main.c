//Declaracao das bibliotecas. stdio e stdlib sao bibliotecas padrao
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracao de variaveis
    int num1, num2; //Varias variaveis de tipo INTEIRO em uma mesma linha
    float num3=10.0, num4; // Variáveis do tipo FLOAT com e sem atribuicao de valor
    double num5; //Uma unica variavel por linha
    double num6; //Uma unica variavel por linha
    char letra1 = 'a', letra2; // Variaveis do tipo caracter com atribuicao. Uso de aspas simples
    char palavra1[10] = "Ola"; //Atribuicao de valor tipo String. Uso de aspas duplas
    char palavra2[10]; //Variavel do tipo String com tamanho 10


    printf("Entre com uma letra: "); // Solicitacao de entrada de letra
    scanf("%c", &letra2);
    /*O comando scanf faz a leitura do que foi inserido via teclado
      O identificador % é responsavel por informar o tipo de entrada
      %c - Caracter
      %s - String
      %d - Inteiro
      %f - Float ou Double
      O símbolo & (e comercial) indica que o dado deve ser salvo no endereco da memoria letra2
    */
    printf("Letra atribuida no inicio: %c, Letra inserida via teclado: %c\n",letra1, letra2); //Exibindo o que foi digitado
    /* No comando printf o uso do marcador % sucedido por um tipo indica o tipo de dadoque sera impresso
       Depois do texto deve-se usar uma virgula e a variaveis a serem impressas, separadas por virgula
       O \n indica que o cursor deve ir para a próxima linha
    */
    fflush(stdin);// Comando que limpa a entrada para que outro valor seja lido via teclado


    printf("Entre com seu primeiro nome com ate 10 caracteres: ");//Solicitacao de entrada de dados
    scanf("%s", &palavra2);
    printf("Palavra atribuida no inicio: %s, Nome inserido via teclado: %s\n",palavra1, palavra2); //Exibindo o que foi digitado





    return 0;
}
