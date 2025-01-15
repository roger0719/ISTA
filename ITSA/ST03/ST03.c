#include <stdio.h> // 引入標準輸入輸出函式庫

int main() {
    int num; // 定義變數用於儲存輸入的整數

    // 使用 while 迴圈持續讀取輸入，直到 EOF（End Of File）
    while (scanf("%d", &num) != EOF) {
        printf("%c\n", num); // 將整數轉換為字元並輸出，最後加換行符號
    }

    return 0; // 程式結束，返回 0 表示執行成功
}
