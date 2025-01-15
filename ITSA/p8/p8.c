#include <stdio.h>

int main() {
    int n; // 測試案例數量
    int m; // 每組數據的輸入值
    int square, cube; // 定義平方值和立方值

    // 讀取測試案例的數量
    scanf("%d", &n);

    // 驗證 n 是否在合法範圍內 (1 ≤ n ≤ 20)
    if (n < 1 || n > 20) {
        return 1; // 若輸入不合法，直接結束程式
    }

    // 處理每組輸入
    for (int i = 0; i < n; i++) {
        // 讀取單個數據 m
        scanf("%d", &m);

        // 計算平方值和立方值
        square = m * m;       // 平方值
        cube = m * m * m;     // 立方值

        // 輸出原數值、平方值和立方值
        printf("%d %d %d\n", m, square, cube);
    }

    return 0; // 程式正常結束
}
