/*
   ========================================
   hash_fn.cpp 
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.


   Developer: 鄭佳恩 <s1131420@mail.yzu.edu.tw>
 */
#include <string>

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    return key % m;  // basic division method
}

int myHashString(const std::string& str, int m) {

    const int p = 31; 
    unsigned long hash = 0;
    
    // 實作 Polynomial Rolling Hash
    for (char c : str) {
        // 將字元c的ASCII值加入，並進行乘法和取模運算
        // 確保結果在 [0, m-1] 範圍內
        hash = (hash * p + c) % m; 
    }

    return static_cast<int>(hash); // 最終的 hash 值已經在 [0, m-1] 範圍內
}