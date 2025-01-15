#include <stdio.h>

int main() {
    int score; // 用於存放用戶輸入的成績

    // 提示用戶輸入
    //printf("請輸入一個成績 (0~100)：\n");
    scanf("%d", &score);

    // 判斷成績範圍並輸出結果
    if (score >= 90 && score <= 100) {
        printf("A\n"); // 成績在90~100之間
    } else if (score >= 80 && score <= 89) {
        printf("B\n"); // 成績在80~89之間
    } else if (score >= 70 && score <= 79) {
        printf("C\n"); // 成績在70~79之間
    } else if (score >= 60 && score <= 69) {
        printf("D\n"); // 成績在60~69之間
    } else if (score >= 0 && score < 60) {
        printf("E\n"); // 成績小於60
    } else {
        printf("error\n"); // 輸入超出範圍
    }

    return 0; // 程式結束
}
