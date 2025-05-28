#include "hashtable.h"
#include <stdio.h>
#include <stdlib.h>

void initHashTable(HashTable* ht, int capacity) {
    ht->capacity = capacity;
    ht->size = 0;
    ht->EMPTY = -1;
    ht->DELETED = -2;
    ht->table = malloc(sizeof(int) * capacity);

    for (int i = 0; i < capacity; ++i) {
        ht->table[i] = ht->EMPTY;
    }
}

int hash(int key, int capacity) {
    return key % capacity;
}

void printHashTable(const HashTable* ht) {
    printf("=== HashTable ===\n");
    for (int i = 0; i < ht->capacity; ++i) {
        printf("[%d]: ", i);
        if (ht->table[i] == ht->EMPTY) {
            printf("(EMPTY)");
        } else if (ht->table[i] == ht->DELETED) {
            printf("(DELETED)");
        } else {
            printf("%d", ht->table[i]);
        }
        printf("\n");
    }
    printf("=================\n");
}
