#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>

/* given data structure for a double linked list */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void insertion_sort_array(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_sort_divide(int *array, int l, int r, size_t size);
void merge_sort_combine(int *array, int l, int m, int r, size_t size);
void split(int *buffer, int *array, int l, int r);
void merge(int *buffer, int *array, int l, int m, int r);

#endif
