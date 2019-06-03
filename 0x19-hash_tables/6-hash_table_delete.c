#include "hash_tables.h"

/**
 * 
 * 
 */

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *nxt;
    unsigned long int idx;

    if (ht == NULL || ht->array == NULL || ht->size == 0)
        return;
    for (idx = 0; idx < ht->size; idx++)
    {
        while (ht->array[idx] != NULL)
        {
            nxt = ht->array[idx]->next;
            free(ht->array[idx]->key);
            free(ht->array[idx]->value);
            free(ht->array[idx]);
            ht->array[idx] = nxt;
        }
    }
    free(ht->array);
    ht->array = NULL;
    ht->size = 0;
    free(ht);
}