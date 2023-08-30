#include <stdio.h>
#include <stdlib.h>

//CONVERSAO DE DADOS
int main()
{
    int numeroInt;
    float numeroFloat;
    char numero1[10] = "256", numero2[10] = "5.325"; // Strings com numeros

    numeroInt = atoi(numero1); // Converter String para Int - ATOI
    numeroFloat = atof(numero2); // Converter String para Float - ATOF

    printf("Numero convertido de String para inteiro %d\n", numeroInt);
    printf("Numero convertido de String para float %f\n", numeroFloat);


    return 0;
}
