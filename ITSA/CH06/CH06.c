#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100]; // 用於儲存輸入的字串

    //printf("請輸入一個變數：\n");
    while (fgets(input, sizeof(input), stdin)) {
        // 移除換行符號
        input[strcspn(input, "\n")] = 0;

        int is_int = 1, is_float = 0, is_char = 0, length = strlen(input);

        // 判斷空輸入
        if (length == 0) {
            //printf("輸入為空，請重新輸入：\n");
            continue;
        }

        // 如果只有一個字元，可能是 char
        if (length == 1) {
            if (isalpha(input[0]) || ispunct(input[0])) {
                is_char = 1;
            }
        }

        // 判斷是否為整數或浮點數
        int dot_count = 0;
        for (int i = 0; i < length; i++) {
            if (input[i] == '.') {
                dot_count++;
                is_float = 1;
                is_int = 0; // 小數點存在時不可能是整數
            } else if (!isdigit(input[i])) {
                is_int = 0;
                is_float = 0;
                break; // 非數字且不是小數點，直接跳出
            }
        }

        // 如果小數點超過1個，不可能是浮點數
        if (dot_count > 1) {
            is_float = 0;
        }

        // 輸出結果
        if (is_char) {
            printf("char\n");
        } else if (is_int) {
            printf("int\n");
        } else if (is_float) {
            printf("float\n");
        } else {
            printf("string\n");
        }

        //printf("請輸入下一個變數（按Ctrl+C結束）：\n");
    }

    return 0;
}
