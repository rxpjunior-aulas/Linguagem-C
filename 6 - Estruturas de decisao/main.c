#include <stdio.h>
#include <stdlib.h>

//ESTRUTURAS DE DECIS�O
int main()
{
    int num1, num2; //Declaracao das variaveis
    printf("Entre com um numero inteiro: "); //Entrada do primeiro numero
    scanf("%d", &num1);
        printf("Entre com outro numero inteiro: "); //Entrada do segundo numero
    scanf("%d", &num2);

    /*UTILIZAMOS OS OPERADORES RELACIONAIS PARA VERIFICAR GRANDEZAS E EQUIVALENCIAS
    VALEM TANTO PARA DADOS NUM�RICOS QUANTO COMPARA��ES DE LETRAS E PALAVRAS*/


    if(num1 > num2){ //Se num1 for MAIOR que num2 fa�a o que est� dentro do bloco
        printf("%d e maior que %d", num1, num2);
    }
    else if(num1 < num2){ //Senao, se num1 for MENOR fa�a o que est� dentro do bloco
        printf("%d e menor que %d", num1, num2);
    }
    else{  //Senao, fa�a o que esta dentro do bloco
        printf("%d e igual a %d", num1, num2);
    }
    return 0;
}
