#include <stdio.h>

int main() {
    int a, b, c; // 定義三個整數
    int max; // 用來存儲最大值

    // 輸入三個整數
    scanf("%d %d %d", &a, &b, &c);

    // 假設第一個數為最大值
    max = a;

    // 比較第二個數
    if (b > max) {
        max = b; // 如果 b 比目前的 max 大，更新 max
    }

    // 比較第三個數
    if (c > max) {
        max = c; // 如果 c 比目前的 max 大，更新 max
    }

    // 輸出最大值
    printf("%d\n", max);

    return 0; // 程式正常結束
}
