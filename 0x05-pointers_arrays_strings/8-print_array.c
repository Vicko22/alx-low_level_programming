#include <stdio.h>

#include "main.h"





/**
* print_array - prints n elemants of an array of intergers
* @arr: input arrays
* @n: input n elements
* Return: 0
*/



void print_array(int *arr, int n)

{

int i = 0;



for (; i < n; i++)

{

printf("%d", *(arr + i));

if (i != (n - 1))

printf(", ");

}

printf("\n");

}
