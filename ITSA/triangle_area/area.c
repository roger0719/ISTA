#include <stdio.h>

int main() {
    int base, height;  // 定義整數型變數，存儲三角形的底和高
    double area;       // 定義浮點型變數，用於存儲三角形面積

    // 讀取底和高
    scanf("%d %d", &base, &height);

    // 計算三角形面積，使用浮點數計算
    area = (base * height) / 2.0;

    // 輸出結果，保留 1 位小數
    printf("Triangle area:%.1f\n", area);

    return 0; // 正常結束程式
}
