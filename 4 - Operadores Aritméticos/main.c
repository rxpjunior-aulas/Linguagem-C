#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Importacao necessaria para uso da funcao pow (exponenciacao)

//OPERADORES RELACIONAIS
int main()
{
    int num1 = 4, num2 = 2;
    //Soma
    printf("Numero %d + numero %d = %d\n", num1, num2, (num1 + num2));

    //Subtracao
    printf("Numero %d - numero %d = %d\n", num1, num2, (num1 - num2));

    //Multiplicacao
    printf("Numero %d x numero %d = %d\n", num1, num2, (num1 * num2));

    //Divisao
    printf("Numero %d / numero %d = %d\n", num1, num2, (num1 / num2));

    //Exponenciacao
    printf("Numero %d elevado numero %d = %f\n", num1, num2, pow(num1, num2));
    // O dado produzido pela funcao pow é do tipo Float
}
