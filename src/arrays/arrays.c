#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../include/math/math.h"

#define NOT_FOUND (-1) // "Macroing"

/*
    Search for a int inside an array of int, if it is found the index is returned, if not returns (-1)
*/
int array_search_int(int *array, unsigned int length, int item)
{
    int result = NOT_FOUND;

    // Keep looping and just stop if it is the end of the array or the item was found
    for (size_t i = 0; i < length && result == NOT_FOUND; i++)
    {
        if (array[i] == item)
            result = i;
    }
    
    // Return the index or an invalid integer
    return result;
}

/*
    Search for a string inside an array of strings, if it is found the index is returned, if not returns (-1)
*/
int array_search_string(char **array, unsigned int length, char *item)
{
    int result = NOT_FOUND;

    // Keep looping and just stop if it is the end of the array or the item was found
    for (size_t i = 0; i < length && result == NOT_FOUND; i++)
    {
        if (strcmp(array[i], item) == 0)
            result = i;
    }
    
    // Return the index or an invalid integer
    return result;
}

/*
    Array push function

    It reallocates memory bytes based in the new size of the array (old length + 1),
    and adds one item to the top
*/
void array_push_int(int *array, size_t length, int item)
{
    unsigned int position = length - 1;

    array = (int *) realloc(array, (length * sizeof(item)));
    
    array[position] = item;
}

void array_push_float(float *array, size_t length, float item)
{
    unsigned int position = length - 1;

    array = (float *) realloc(array, (length * sizeof(item)));
    
    array[position] = item;
}

/*
    Comparison between an array of numbers to find the maximum
*/
int array_max_int(int *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    int maximum = array[0]; 
     
    for (size_t i = 1; i < length; i++)
    {   
        maximum = max_int(maximum, array[i]);
    }
    
    return maximum;
}

float array_max_float(float *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    float maximum = array[0];  

    for (size_t i = 1; i < length; i++)
    {   
        maximum = max_float(maximum, array[i]);
    }
    
    return maximum;
}

/*
    Comparison between an array of numbers to find the minimum
*/
int array_min_int(int *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    int minimum = array[0];  

    for (size_t i = 1; i < length; i++)
    {   
        minimum = min_int(minimum, array[i]);
    }
    
    return minimum;
}

float array_min_float(float *array, size_t length)
{
    if (length == 0)
    {
        return (float) 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    float minimum = array[0]; 

    for (size_t i = 1; i < length; i++)
    {   
        minimum = min_float(minimum, array[i]);
    }
    
    return minimum;
}