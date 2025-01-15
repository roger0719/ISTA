#include <stdio.h>

int main() {
    double celsius;    // 定義輸入的攝氏溫度
    double fahrenheit; // 定義轉換後的華氏溫度

    // 讀取攝氏溫度 (允許小數點)
    scanf("%lf", &celsius);

    // 根據公式進行攝氏溫度轉華氏溫度的轉換
    // 華氏溫度公式：F = C * (9.0 / 5.0) + 32
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    // 格式化輸出結果，保留小數點後 1 位
    printf("%.1f\n", fahrenheit);

    return 0; // 程式正常結束
}
