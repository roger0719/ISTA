#include <stdio.h>
#include <ctype.h> // 用於處理大小寫字母

int main() {
    char gender; // 用於存放用戶輸入的字母

    // 提示用戶輸入
    // printf("請輸入一個字母 (E, M, F)：\n");
    scanf(" %c", &gender);

    // 將輸入轉換為大寫（確保不受大小寫影響）
    gender = toupper(gender);

    // 使用 if 判斷輸入
    if (gender == 'E') {
        printf("ByeBye\n"); // 當輸入為 E 時輸出 "ByeBye"
    } else if (gender == 'M') {
        printf("Male\n"); // 當輸入為 M 時輸出 "Male"
    } else if (gender == 'F') {
        printf("Female\n"); // 當輸入為 F 時輸出 "Female"
    } else {
        printf("輸入錯誤，請輸入 E, M 或 F。\n"); // 非法輸入的錯誤提示
    }

    return 0; // 程式結束
}
