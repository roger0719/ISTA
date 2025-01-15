#include <stdio.h>

int main() {
    int a, b, c; // 用於存放用戶輸入的三個整數
    int max, mid, min; // 用於存放最大、中間和最小值

    // 提示用戶輸入三個相異的整數
    //printf("請輸入三個相異的整數：\n");
    scanf("%d %d %d", &a, &b, &c);

    // 判斷最大值
    if (a > b && a > c) {
        max = a;
        if (b > c) {
            mid = b;
            min = c;
        } else {
            mid = c;
            min = b;
        }
    } else if (b > a && b > c) {
        max = b;
        if (a > c) {
            mid = a;
            min = c;
        } else {
            mid = c;
            min = a;
        }
    } else { // c > a && c > b
        max = c;
        if (a > b) {
            mid = a;
            min = b;
        } else {
            mid = b;
            min = a;
        }
    }

    // 輸出結果
    printf("%d>%d>%d\n", max, mid, min);

    return 0; // 程式結束
}
