#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_12() 
{
    printf("\nAveriguar peso de una persona\n");

    float weight;

    printf("\nIngrese el peso: ");
    fflush(stdin);
    scanf(" %f", &weight);

    printf("Peso: %.2fKg", weight);
    printf("\nLa persona ");
    if (weight < 40)
    {
        printf("es de contextura pequeña o necesita nutrición");
    }
    else if (weight >= 40 && weight < 60)
    {
        printf("esta alimentandose al menos");
    }
    else if (weight >= 60 && weight < 80)
    {
        printf("va por buen camino");
    }
    else
    {
        printf("está disfrutando de la vida");
    }

    printf("\n\n");
    

}