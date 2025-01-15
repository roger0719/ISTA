#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256 // 定義字串最大長度

// 字串反轉函數
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    int n; // 用來儲存輸入的字串數量
    scanf("%d", &n); // 讀取第一行的數字 n

    char input[MAX_LENGTH]; // 用來儲存每行輸入的字串

    // 使用迴圈讀取每個字串並反轉
    for (int i = 0; i < n; i++) {
        scanf("%s", input); // 讀取字串
        reverseString(input); // 呼叫反轉函數
        printf("%s\n", input); // 輸出反轉後的結果
    }

    return 0;
}
