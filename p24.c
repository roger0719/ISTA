#include <stdio.h> // 引入標準輸入輸出函式庫

int main() {
    int n; // 用於儲存測試組數
    scanf("%d", &n); // 讀取測試組數

    // 使用迴圈處理每組測試資料
    for (int i = 0; i < n; i++) {
        int x, y; // 儲存每組的兩個整數
        scanf("%d %d", &x, &y); // 讀取兩個整數

        // 確保 x 為較小的數，y 為較大的數
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0; // 初始化總和
        // 計算從 x 到 y（包含）的所有整數總和
        for (int j = x; j <= y; j++) {
            sum += j;
        }

        printf("%d\n", sum); // 輸出該組測試的總和，並換行
    }

    return 0; // 程式結束
}
