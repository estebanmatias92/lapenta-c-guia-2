#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/arrays/arrays.h"

void es_navidad(void);
void mayor_numero_decimal(void);
void mayor_caracter(void);

void ejercicio_6() 
{    

    es_navidad();

    printf("\n");

    mayor_numero_decimal();

    printf("\n");

    mayor_caracter();

    printf("\n");

}

/*
    Exercise 6.a)
*/
void es_navidad(void)
{
    printf("\na) Escribir fecha\n");

    unsigned int day = 0;
    unsigned int month = 0;

    printf("\n");

    do
    {
        printf("Ingrese dia: ");
        fflush(stdin);
        scanf(" %d", &day);
    } while (day == 0 || day > 31);
    
    do
    {
        printf("Ingrese el numero de mes: ");
        fflush(stdin);
        scanf(" %d", &month);
    } while (month == 0 || month > 12);

    printf("%d/%d es %s", day, month, (month == 12 && day == 25) ? "Navidad" : "un día cualquiera");    
    printf("\n");

    printf("\n\nb) Encontrar el minimo entre numeros decimales\n");
    printf("\n");
}

/*
    Exercise 6.b)
*/
void mayor_numero_decimal(void)
{
    printf("\nb) Comparar números decimales\n");

    char input;
    float *numbers = (float *) malloc(sizeof(float));
    // Start the size counter
    unsigned int i = 0;

    do
    {       
        float num;

        // Ask for user input
        printf("Ingrese número decimal: ");
        fflush(stdin);
        scanf(" %f", &num);
        i++;
        array_push_float(numbers, i, num);

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
        printf("%.2f", numbers[j]);

        if (j < length - 1)   
            printf(", ");        
    }

    printf("}");

    // Showing the maximum number
    printf("\nThe minimum decimal is: %.2f", array_min_float(numbers, length)); 
}

/*
    Exercise 6.c)
*/
void mayor_caracter(void)
{
    printf("\nc) Comparar caracteres\n");

    char input;
    char *characters = (char *) malloc(sizeof(char));
    // Start the size counter
    unsigned int i = 0;

    do
    {       
        char c;

        // Ask for user input
        printf("Ingrese caracter: ");
        fflush(stdin);
        scanf(" %c", &c);
        i++;
        array_push_char(characters, i, c);

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
        printf("%c", characters[j]);

        if (j < length - 1)   
            printf(", ");        
    }
    printf("}");

    char *ordered_characters = array_sort_char(characters, length, "up");
    printf("\nOrdered array[%d]: {", length);
    for (size_t j = 0; j < length; j++)
    {        
        printf("%c", ordered_characters[j]);

        if (j < length - 1)   
            printf(", ");        
    }
    printf("}");

    // Showing the maximum number
    //printf("\nThe minimum character is: %c", array_min_char(characters, length)); 
}