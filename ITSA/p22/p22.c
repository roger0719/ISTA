#include <stdio.h>

void print_binary(int num) {
    // 宣告一個陣列儲存二進制位元
    char binary[9]; // 8位元 + 1個字元給'\0'結尾
    binary[8] = '\0'; // 設定結尾符號，確保是合法字串

    // 逐位處理
    for (int i = 7; i >= 0; i--) {
        binary[i] = (num & 1) ? '1' : '0'; // 判斷當前位是1還是0
        num >>= 1; // 將數字右移1位
    }

    // 輸出二進制字串
    printf("%s\n", binary);
}

int main() {
    int input;

    // 提示用戶輸入
    //printf("請輸入一個整數 (-128 到 127)：\n");
    scanf("%d", &input);

    // 驗證輸入範圍
    if (input < -128 || input > 127) {
        printf("輸入錯誤，請輸入範圍內的數字！\n");
        return 1; // 錯誤結束程式
    }

    // 呼叫函數進行二進制轉換
    print_binary(input);

    return 0;
}
