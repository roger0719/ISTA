#include <stdio.h>

int main() {
    int num; // 用於存放用戶輸入的整數

    // 提示用戶輸入
    //printf("請輸入一個整數：\n");
    scanf("%d", &num);

    // 判斷奇偶性並輸出結果
    if (num % 2 == 0) {
        printf("even\n"); // 如果餘數為0，則輸出偶數
    } else {
        printf("odd\n"); // 否則輸出奇數
    }

    return 0; // 程式結束
}
