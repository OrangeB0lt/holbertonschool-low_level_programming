#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *storage;
    unsigned long int idx;
    char i_o = 0;

    if (ht == NULL || ht->array == NULL)
        return;
    printf("{");
    for (idx = 0; idx < ht->size; idx++)
    {
        storage = ht->array[idx];
        while (storage != NULL)
        {
            if (i_o == 1)
            {
                printf(", ");
            }
            printf("'%s': '%s'", storage->key, storage->value);
            i_o = 1;
            storage = storage->next;
        }
    }
    printf("}\n");
}