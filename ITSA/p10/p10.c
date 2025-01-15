#include <stdio.h>

int main() {
    int miles;       // 定義輸入的英里數
    double kilometers; // 定義轉換後的公里數

    // 讀取輸入的英里數
    scanf("%d", &miles);

    // 英里轉公里公式：1 英里 = 1.6 公里
    kilometers = miles * 1.6;

    // 輸出結果，保留小數點後 1 位
    printf("km=%.1f\n", kilometers);

    return 0; // 程式正常結束
}
