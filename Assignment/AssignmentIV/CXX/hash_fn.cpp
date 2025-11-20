/*
   ========================================
   hash_fn.cpp 
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.


   Developer: 鄭佳恩 <s1131420@mail.yzu.edu.tw>
 */
#include <string>
#include <cmath>

int myHashInt(int key, int m) {
    /*
    double A = (sqrt(5)-1)/2; 
    double val = key * A;
    val = val - (long)val; 
    return (int)(m * val); 
    */
    return key % m; 
}

int myHashString(const std::string& str, int m) {

    const int p = 31; 
    unsigned long hash = 0;
 
    for (char c : str) {
        hash = (hash * p + c) % m; 
    }

    return static_cast<int>(hash);
}