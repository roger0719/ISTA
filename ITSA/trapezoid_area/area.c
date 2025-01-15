#include <stdio.h>

int main() {
    int top, bottom, height; // 定義整數型變數，分別代表上底、下底、高
    double area;             // 定義浮點型變數，用於存儲梯形面積

    // 讀取上底、下底和高
    scanf("%d %d %d", &top, &bottom, &height);

    
    // 計算梯形面積，使用浮點數運算避免精度損失
    area = ((top + bottom) * height) / 2.0;

    // 輸出結果，保留小數點後 1 位
    printf("Trapezoid area:%.1f\n", area);

    return 0; // 正常結束程式
}
