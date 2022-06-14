#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_3() 
{
    printf("\nAveriguar si el número es par o impar:\n");

    unsigned int num = 0;

    printf("\nIngrese el número: ");
    fflush(stdin);
    scanf("%d", &num);
    
    if (num > 0)
    {
        printf("\nEl número es: %s", (num % 2 == 0) ? "PAR" : "IMPAR");
    }
    else
    {
        printf("\nEl número no es entero y positivo");
    }
}