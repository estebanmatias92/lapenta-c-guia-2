#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_13() 
{
    printf("\nFactura Telefónica\n");

    unsigned int id = 0;
    char *category = (char *) malloc(sizeof(char) * 2);
    unsigned int pulses = 0;
    float pulse_cost = 0;
    float total = 0;
    
    // Asking for user input
    printf("\nIngresar número de cuenta del abonado: ");
    fflush(stdin);
    scanf(" %d", &id);

    printf("Categorias: Particular, Profesional, Comercial\n");
    printf("Ingresar número de categoria del abonado: ");
    fflush(stdin);
    scanf(" %s", category);

    printf("Ingresar cantidad de pulsos: ");
    fflush(stdin);
    scanf(" %d", &pulses);

    // Search for category name match, and get the value per pulse
    if (strcmp(category, "Particular") == 0)
    {
        pulse_cost = (pulses >= 0  && pulses <= 200) ? 0.05 :
                    (pulses >= 201  && pulses <= 400) ? 0.07 :
                    (pulses >= 401  && pulses <= 1000) ? 0.1 : 0.12;

        total = 30 * (pulses * pulse_cost);

    }
    else if (strcmp(category, "Profesional") == 0)
    {
        pulse_cost = (pulses >= 0  && pulses <= 200) ? 0.07 :
                    (pulses >= 201  && pulses <= 400) ? 0.11 :
                    (pulses >= 401  && pulses <= 1000) ? 0.13 : 0.15;

        total = 50 * (pulses * pulse_cost);
    }
    else if (strcmp(category, "Comercial") == 0)
    {
        pulse_cost = (pulses >= 0  && pulses <= 200) ? 0.09 :
                    (pulses >= 201  && pulses <= 400) ? 0.12 :
                    (pulses >= 401  && pulses <= 1000) ? 0.15 : 0.17;
        
        total = 70 * (pulses * pulse_cost);
    }
    else
    {
        category = "Categoria no reconocida";
    }

    printf("\n");
    printf("\nAbonado número: %d", id);
    printf("\nCategoria: %s", category);
    printf("\nImporte: $%.2f", total);

    printf("\n\n");
}