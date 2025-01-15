#include <stdio.h>

int main() {
    int choice; // 用於存放用戶輸入的角色代號

    // 提示用戶輸入
    //printf("請輸入一個數字 (1~3)：\n");
    scanf("%d", &choice);

    // 使用 switch 判斷輸入值
    switch (choice) {
        case 1:
            printf("Person\n"); // 當輸入為1時輸出"Person"
            break;
        case 2:
            printf("Fairy\n"); // 當輸入為2時輸出"Fairy"
            break;
        case 3:
            printf("Dwarf\n"); // 當輸入為3時輸出"Dwarf"
            break;
        default:
            printf("輸入錯誤，請輸入1到3之間的數字。\n"); // 輸入值不合法時提示錯誤
    }

    return 0; // 程式結束
}
