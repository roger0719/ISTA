#include <stdio.h>
#include <math.h> // 使用 math 函式庫進行運算（可選，若用不到則可忽略）

int main() {
    int weight, height;  // 定義輸入的體重 (kg) 和身高 (cm)
    double bmi;          // 定義 BMI 值為浮點數

    // 讀取體重和身高
    scanf("%d %d", &weight, &height);

    // 將身高從公分轉換為公尺，計算 BMI 值
    // BMI = 體重 / 身高平方 (公尺為單位)
    bmi = weight / pow(height / 100.0, 2);

    // 輸出 BMI 值，保留小數點後兩位
    printf("%.2f\n", bmi);

    return 0; // 程式正常結束
}
