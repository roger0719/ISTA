#include <stdio.h>

// 函數：計算兩數的最大公因數
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;  // 暫存 b 的值
        b = a % b;     // 計算 a 對 b 的餘數
        a = temp;      // 將 b 的值給 a
    }
    return a;          // 最後 a 即為最大公因數
}

int main() {
    int m, n; // 兩個整數

    // 輸入兩個正整數
    scanf("%d %d", &m, &n);

    // 計算最大公因數
    int result = gcd(m, n);

    // 輸出最大公因數
    printf("%d\n", result);

    return 0; // 程式正常結束
}
