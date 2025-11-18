/*
   ========================================
   hash_fn.h 
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Developer: 鄭佳恩 <s1131420@mail.yzu.edu.tw>
 */
#ifndef HASH_FN_H
#define HASH_FN_H

#include <stdio.h>
#include <string.h>

int myHashString(const char* str, int m);
int myHashInt(int key, int m);

#endif