#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // 定義陣列最大大小為 100

int main() {
    int arr[MAX_SIZE]; // 用於儲存輸入的陣列
    int n = 0;         // 用於計算陣列長度
    int input;

    // 提示用戶輸入數字，並以空格隔開，輸入 -1 結束
    //printf("請輸入一維陣列元素，以空格隔開，輸入 -1 結束：\n");

    // 讀取輸入，直到輸入 -1 或超過最大元素數量
    while (scanf("%d", &input) == 1 && input != -1) {
        if (n < MAX_SIZE) {
            arr[n++] = input; // 將輸入的數字存入陣列，並遞增計數器
        } else {
            printf("輸入超過最大限制 (%d)。\n", MAX_SIZE);
            break;
        }
    }

    // 打印反轉後的陣列
    //printf("反轉後的陣列：\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]); // 從陣列的最後一個元素開始打印
        if (i > 0) {
            printf(" "); // 元素之間加空格
        }
    }
    printf("\n"); // 換行結束輸出

    return 0;
}
