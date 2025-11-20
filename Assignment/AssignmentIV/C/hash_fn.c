/*
   ========================================
   hash_fn.c
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Developer: 鄭佳恩 <s1131420@mail.yzu.edu.tw>
 */
#include <stdio.h>
#include <math.h>

int myHashInt(int key, int m) {
    /*
    const double A = (sqrt(5.0) - 1.0) / 2.0;
    double val = (double)key * A;
    val = val - floor(val);
    return (int)(m * val);
    */
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