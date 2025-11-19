/*
   ========================================
   hash_fn.c
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Developer: 鄭佳恩 <s1131420@mail.yzu.edu.tw>
 */
#include <stdio.h>

int myHashInt(int key, int m) {
    if (key < 0) {
        key = -key;
    }
    return key % m;
}

int myHashString(const char* str, int m) {
    const int p = 31;
    unsigned long hash = 0;
    
    for (const char *ptr = str; *ptr != '\0'; ptr++) {
        hash = (hash * p + *ptr) % m;
    }

    return (int)hash;
}