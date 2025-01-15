#include <stdio.h>

int main() {
    int n; // 測試案例數量
    int i; // 指數 i

    // 讀取測試案例數量
    scanf("%d", &n);

    // 驗證 n 是否在合法範圍內 (1 ≤ n ≤ 10)
    if (n < 1 || n > 10) {
        return 1; // 如果 n 超出範圍，直接結束程式
    }

    // 處理每組輸入
    for (int j = 0; j < n; j++) {
        // 讀取指數 i
        scanf("%d", &i);

        // 判斷 i 是否超出範圍
        if (i > 31) {
            // 若 i > 31，輸出 "Value of more than 31"
            printf("Value of more than 31\n");
        } else {
            // 若 i ≤ 31，使用位移運算計算 2^i
            // 位移運算：2^i 等於 1 左移 i 位
            printf("%d\n", 1 << i);
        }
    }

    return 0; // 程式正常結束
}
