#include "hashtable.h"

int main() {
    HashTable ht;
    initHashTable(&ht, 10);
    printHashTable(&ht);
    return 0;
}
