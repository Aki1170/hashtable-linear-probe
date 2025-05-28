#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct {
    int* table;
    int capacity;
    int size;
    int EMPTY;
    int DELETED;
} HashTable;

void initHashTable(HashTable* ht, int capacity);
void printHashTable(const HashTable* ht);
int hash(int key, int capacity);

#endif
