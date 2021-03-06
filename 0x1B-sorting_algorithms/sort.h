#ifndef SORT_ALGO
#define SORT_ALGO

#include <stdlib.h>
#include <stdio.h>

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

/* printing provided */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* sorting algos */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void quikSort(int *array, size_t size, int begin, int end);
void shell_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

/* helper functions */
void Aswap(int **arr, int idx_a, int idx_b);
void prevSwap(listint_t *no);
void Bswap(int *array, size_t size, int second, int third);
int parti(int *array, size_t size, int begin, int turn);
void merge(int begin, int end, int *covfefe, int *array);
void _sort(int begin, int end, int *covfefe, int *array);
void Cswap(listint_t **head, listint_t *node);


#endif
