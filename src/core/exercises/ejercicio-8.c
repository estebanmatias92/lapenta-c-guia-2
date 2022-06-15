#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_8() 
{
    printf("\nUbicar punto en un plano de coordenadas\n");

    float x, y;
    
    // Asking for input
    printf("\nIngresar coordenada X: ");
    fflush(stdin);
    scanf(" %f", &x);

    printf("Ingresar coordenada Y: ");
    fflush(stdin);
    scanf(" %f", &y);

    printf("\nEl punto se encuentra en: ");

    if (x == 0 && y == 0)
    {
        printf("centro");
    }
    else if (y == 0)
    {
        printf("eje X %c 0", (x > 0) ? '>' : '<' );
    }
    else if (x == 0)
    {
        printf("eje Y %c 0", (y > 0) ? '>' : '<' );
    }
    else
    {
        if (x > 0)
            printf("%s cuadrante", (y > 0) ? "primer" : "cuarto");
        else
            printf("%s cuadrante", (y > 0) ? "segundo" : "tercer");
    }

    printf("\n\n");
}