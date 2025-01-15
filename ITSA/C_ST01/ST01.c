#include <stdio.h>
#include <stdlib.h>

// 函數宣告
void convertToBase(int decimalNumber, int base);

int main() {
    int base, decimalNumber;

    // 提示用戶輸入進制與十進位整數，並讀取輸入
    while (scanf("%d %d", &base, &decimalNumber) != EOF) {
        // 檢查進制是否在合法範圍內
        if (base < 2 || base > 16) {
            printf("\n錯誤: 輸出的進制必須在 2 到 16 之間\n");
            continue;
        }

        // 呼叫函數進行數制轉換
        convertToBase(decimalNumber, base);
        printf("\n"); // 輸出換行
    }

    return 0;
}

// 函數：進行數制轉換
// decimalNumber: 十進位整數
// base: 目標進制 (2 <= base <= 16)
void convertToBase(int decimalNumber, int base) {
    char result[32]; // 儲存結果的字元陣列 (最多可容納 32 位數字)
    int index = 0;   // 記錄結果的索引位置
    char digits[] = "0123456789ABCDEF"; // 進制數字對應的字符表

    // 特殊情況處理: 若輸入為 0
    if (decimalNumber == 0) {
        printf("0");
        return;
    }

    // 將十進位整數轉換為目標進制
    while (decimalNumber > 0) {
        int remainder = decimalNumber % base; // 計算餘數
        result[index++] = digits[remainder]; // 根據餘數取對應字元
        decimalNumber /= base;               // 更新十進位整數的值
    }

    // 反向輸出結果 (因為從低位到高位存儲)
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}
