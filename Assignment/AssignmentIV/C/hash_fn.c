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
    // TODO: replace with your own design
    return key % m;  // division method example
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
    // TODO: replace with your own design
    return (int)(hash % m); // basic division method
}