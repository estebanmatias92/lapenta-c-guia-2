#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/arrays/arrays.h"

void ejercicio_1() 
{
    printf("\nEncontrar el numero mayor:\n");

    char input;
    int *numbers = (int *) malloc(sizeof(int));

    // Start the size counter
    unsigned int i = 0;

    do
    {       
        int num = 0;

        // Ask for user input
        printf("Ingrese numero a comparar: ");
        fflush(stdin);
        scanf("%d", &num);
        i++;
        array_push_int(numbers, i, num);

        if (i >= 3)
        {
            printf("Desea continuar? (y/n): ");
            fflush(stdin);
            scanf(" %c", &input);
        }
        

    } while (i < 3 || (input == 'y' || input == 'Y'));

    // Showing the array
    size_t length = i;
    printf("\nArray[%d]: {", length);

    for (size_t j = 0; j < length; j++)
    {        
        printf("%d", numbers[j]);

        if (j < length - 1)   
            printf(", ");        
    }

    printf("}");

    // Showing the maximum number
    printf("\nThe maximum number is: %d", array_max_int(numbers, length));  
}