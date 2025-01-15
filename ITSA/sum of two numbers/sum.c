#include <stdio.h>

int main() {
    int n; // 測試案例數量
    int a, b; // 每組測試的兩個整數

    // 輸入測試案例數量
    scanf("%d", &n);

    // 驗證測試案例數量範圍 (1 ≤ n ≤ 10)
    if (n < 1 || n > 10) {
        return 1; // 若輸入範圍不合法，直接結束程式
    }

    // 逐行處理每組測試資料
    for (int i = 0; i < n; i++) {
        // 讀取每組測試資料的兩個整數
        scanf("%d %d", &a, &b);

        // 輸出兩數的和
        printf("%d\n", a + b);
    }

    return 0; // 程式正常結束
}
