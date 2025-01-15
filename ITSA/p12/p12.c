#include <stdio.h>

int main() {
    int N;        // 票價金額
    int NT10, NT5, NT1; // 各種硬幣的數量

    // 讀取票價金額
    scanf("%d", &N);

    // 計算 10 元硬幣的數量
    NT10 = N / 10;
    N %= 10; // 更新剩餘金額，取餘數

    // 計算 5 元硬幣的數量
    NT5 = N / 5;
    N %= 5; // 更新剩餘金額，取餘數

    // 剩餘的都是 1 元硬幣的數量
    NT1 = N;

    // 輸出結果
    printf("NT10=%d\n", NT10);
    printf("NT5=%d\n", NT5);
    printf("NT1=%d\n", NT1);

    return 0; // 程式正常結束
}
