#include <stdio.h>

int main() {
    int n; // 測試案例的數量
    int x, y; // 每組測試資料中的兩個整數
    int sum, square; // 計算和及其平方值

    // 讀取測試案例數量
    scanf("%d", &n);

    // 驗證 n 是否在合法範圍內 (1 ≤ n ≤ 20)
    if (n < 1 || n > 20) {
        return 1; // 不合法時直接結束程式
    }

    // 處理每組測試案例
    for (int i = 0; i < n; i++) {
        // 讀取兩個整數 x 和 y
        scanf("%d %d", &x, &y);

        // 計算兩數的和
        sum = x + y;

        // 計算和的平方值
        square = sum * sum;

        // 輸出結果
        printf("%d\n", square);
    }

    return 0; // 程式正常結束
}
