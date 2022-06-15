#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/arrays/arrays.h"

void mostrar_lote(int *array, size_t length);

void ejercicio_9() 
{
    printf("\nCompletar codigo y probar multiplos de 2 o 3\n");

    int array[] = {4, 9, 12, 35};
    size_t length = sizeof(array)/sizeof(array[0]);

    // Showing options
    mostrar_lote(array, length);
    printf("\n");

    // Counter
    unsigned int i = 0;

    // User input
    int a;

    // Launch the exercise to enter 4 values from the lote
    do
    {   
        // Asking for the input
        printf("\nIngrese número del lote: ");
        fflush(stdin);
        scanf("%d", &a);
        i++;

        // Redundant, but necessary to print the title right here, and not write it to each exercise file
        if (array_search_int(array, length, a) == -1)
        {
            printf("Ese número no se encuentra en el lote\n");
            break;
        }    

        // Comparing to find multiple of 2 and 3
        if (a % 2 == 0) 
        {
            printf("%d es múltiplo de %d ", a, 2);

            if (a % 3 == 0) 
            {
                printf("y también de %d ", 3);
                printf("por lo tanto lo es de %d \n", 6);
            }
            else 
            {
                printf("pero no de %d \n", 3);
            }
        }
        else
        {
            if (a % 3 == 0) 
            {
                printf("%d es múltiplo de %d pero no de %d \n", a, 3, 2);
            }
            else 
            {
                printf("%d no es múltiplo de %d ni de %d \n", a, 2, 3);
            }

        }

    } while (i < length && array_search_int(array, length, a) >= 0);

    printf("\n\n");
}

/*
    For loop to printf an array
*/
void mostrar_lote(int *array, size_t length)
{
    printf("\nLote[%d]: {", length);
    for (size_t i = 0; i < length; i++)
    {        
        printf("%d", array[i]);

        if (i < length - 1)   
            printf(", ");        
    }
    printf("}");
}