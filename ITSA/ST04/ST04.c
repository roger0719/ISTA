#include <stdio.h> // 引入標準輸入輸出函式庫

int main() {
    char input; // 定義變數用於儲存輸入的字元

    // 使用 while 迴圈持續讀取輸入，直到 EOF（End Of File）
    while (scanf("%c", &input) != EOF) {
        printf("%d\n", (int)input); // 將字元轉換為整數（萬國碼）並輸出，最後加換行符號
    }

    return 0; // 程式結束，返回 0 表示執行成功
}
