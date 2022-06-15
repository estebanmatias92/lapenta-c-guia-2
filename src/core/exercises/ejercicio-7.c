#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/arrays/arrays.h"

void ejercicio_7() 
{
    printf("\nPromedio alumno\n");

    char *name = (char *) malloc(sizeof(char) * 2);
    int book_number;
    float *scores = (float *) malloc(sizeof(float));

    printf("\nIngrese nombre: ");
    fflush(stdin);
    scanf(" %[^\n]s", name);

    printf("Ingrese número de libreta: ");
    fflush(stdin);
    scanf(" %d", &book_number);


    char input;
    // Start the size counter
    unsigned int i = 0;

    do
    {       
        float num;

        // Ask for user input
        printf("Ingrese puntaje: ");
        fflush(stdin);
        scanf(" %f", &num);
        i++;
        array_push_float(scores, i, num);

        if (i >= 3)
        {
            printf("Desea continuar? (y/n): ");
            fflush(stdin);
            scanf(" %c", &input);
        }
        

    } while (i < 3 || (input == 'y' || input == 'Y'));

    size_t length = i;
    
    printf("\nAlumno");
    printf("\nNombre: %s", name);
    printf("\nNúmero de libreta: %d", book_number);
    printf("\nPromedio: %.2f", array_average_float(scores, length));

    printf("\n\n");
}


