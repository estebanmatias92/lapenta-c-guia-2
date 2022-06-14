#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_5() 
{
    printf("\nFunciones por tramos:\n");

    int x = 0;

    printf("\nPara la función:"
        "\nF(x) { 5x + 2  si  x <= 3 }"
        "\n     { 4x - 5  si  x > 3  }"
    );
    printf("\nIngrese el valor de f(x): ");
    fflush(stdin);
    scanf(" %d", &x);

    float result;

    printf("El resultado para ");
    if (x <= 3)
    {
        result = ((5 * x) - 2);
        printf("f(%d): 5 * %d + 2 = %g", x, x, result);
    }
    else
    {
        result = ((4 * x) - 5);
        printf("f(%d): 4 * %d - 5 = %g", x, x, result);
    }

    printf("\n\n");

    printf("El siguiente algoritmo...");
    printf(
        "\nscanf(\"%%d\",&x);"
        "\nif (x==(-1)) {"
        "\n    f=(-x-1);}"
        "\nelse"
        "\n    if (x>=1){"
        "\n        f=x-1;}"
        "\n    else{"
        "\n        f=1-sqrt(x);}"
        "\nprintf(“f(%%d)=%%g”,x,f);"
    );

    printf("\n\nSe evalua con la siguiente ecuación por tramos: "
        "\n     {  -x - 1    si  x == -1 }"
        "\nF(x) {   x - 1    si  x >= 1  }"
        "\n     {   1 - √x   si  x < 1   }"
    );

    
}