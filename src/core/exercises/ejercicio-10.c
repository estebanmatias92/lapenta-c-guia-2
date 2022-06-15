#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

#define x 2
#define y 3
#define z 4

void ejercicio_10() 
{
    printf("\nReescribir algoritmo\n");

    int m;

    printf("\nIngrese número a comparar: ");
    scanf("%d", &m);

    printf("(if-else) version: ");
    if (m == x) 
    {
        printf("El valor de %d es igual a %d", m, x);
    }
    else
    {
        if (m == y) 
        {
            printf("El valor de %d es igual a %d", m, y);
        }
        else
        {
            if (m == z) 
            {
                printf("El valor de %d es igual a %d", m, z);
            }
            else
            {
                printf("El valor de %d no coincide con ninguno de los ingresados", m);
            }
        }
    }

    printf("\n");

    printf("(switch) version: ");
    switch (m)
    {
    case x:
        printf("El valor de %d es igual a %d", m, x);
        break;
    case y:
        printf("El valor de %d es igual a %d", m, y);
        break;
    case z:
        printf("El valor de %d es igual a %d", m, z);
        break;
    default:
        printf("El valor de %d no coincide con ninguno de los ingresados", m);
        break;
    }
    
    printf("\n\n");
}
