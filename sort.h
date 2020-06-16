#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

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

/* prints */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Bubble sort*/
void bubble_sort(int *array, size_t size);

/* Insertion sort */
void insertion_sort_list(listint_t **list);

/* Selection sort */
void selection_sort(int *array, size_t size);
void swp(int *num1, int *num2);
#endif
