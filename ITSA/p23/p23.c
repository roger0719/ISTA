#include <stdio.h>

int main() {
    int input;

    // 提示用戶輸入
    //printf("請輸入一個十進制整數 (0 ~ 1000)：\n");
    scanf("%d", &input);

    // 驗證輸入範圍
    if (input < 0 || input > 1000) {
        printf("輸入錯誤，請輸入範圍內的數字！\n");
        return 1; // 結束程式
    }

    // 以十六進制格式輸出
    printf("%X\n", input);

    return 0;
}
