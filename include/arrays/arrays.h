#ifndef __ARRAYS__
#define __ARRAYS__

int array_search_int(int *array,  unsigned int length, int item);
int array_search_string(char **array, unsigned int length, char *item);
void array_push_int(int *array, size_t length, int item);
void array_push_float(float *array, size_t length, float item);
int array_max_int(int *array, size_t length);
int array_min_int(int *array, size_t length);
float array_max_float(float *array, size_t length);
float array_min_float(float *array, size_t length);


#endif