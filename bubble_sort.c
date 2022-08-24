#include "sort.h"
/**
 * bubble_sort - sorts an array in ascending order using bubble sort
 * @array: array to be sort
 * @size: array size
 * Return: void
 */

/**
 * swap - swaps two integers
 * @a: the first element
 * @b: the second element
 */
void swap(int a, int b)
{
  int tmp;

  tmp = a;
  a = b;
  b = tmp;
}

/**
 * bubble_sort - sort an array of integers
 * @array: array of integer elements
 * @size: number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
  size_t i;
  int tmp;
  int exchanged = 0;
  size_t bottom = size;
  
  if (array == NULL || size < 2)
    return;

  while (exchanged == 0)
    {
      exchanged = 1;
      for (i=0; i < bottom - 1; i++)
	{
	  if (array[i] > array[i+1])
	    {
	      tmp = array[i];
	      array[i] = array[i+1];
	      array[i+1] = tmp;

	      print_array(array, size);
	      
	      exchanged = 0;
	    }
	}
      bottom--;
    }
}
