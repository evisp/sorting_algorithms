#include "sort.h"

int partition(int *array, int left, int right, size_t size)
{
  int i, j, tmp, tmp2;
  int pivot = array[right];
  i = left - 1;

  for (j = left; j <= right; j++)
    {
      if (array[j] < pivot)
	{
	  i++;
	  if (i != j)
	    {
	      tmp = array[i];
	      array[i] = array[j];
	      array[j] = tmp;

	      print_array(array, size);
	    }
	}
    }
  if (array[right] < array[i+1])
    {
      tmp2 = array[i+1];
      array[i+1] = array[right];
      array[right] = tmp2;

      print_array(array, size);
    }

  return (i + 1);
}

void sort(int *array, int left, int right, size_t size)
{
  int partition_index;

  if (left < right)
    {
      partition_index = partition(array, left, right, size);
      sort(array, left, partition_index - 1, size);
      sort(array, partition_index + 1, right, size);
    }
}

void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;

  sort(array, 0, size - 1, size);
}
