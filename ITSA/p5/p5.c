#include <stdio.h>

int main() {
    int x, y; // 定義兩個整數變數
    int quotient, remainder; // 商與餘數

    // 讀取兩個整數輸入
    scanf("%d %d", &x, &y);

    // 手動計算商與餘數
    quotient = x / y; // 使用整數除法來計算商
    remainder = x % y; // 使用整數取餘運算來計算餘數

    // 修正餘數和商的計算規則
    if (remainder < 0) { // 如果餘數為負數，進行修正
        if (y > 0) { // 當除數 y 為正數時
            quotient -= 1;       // 商減 1
            remainder += y;      // 餘數加上 y，使餘數變為正數
        } else { // 當除數 y 為負數時
            quotient += 1;       // 商加 1
            remainder -= y;      // 餘數減去 y，使餘數與 y 的符號一致
        }
    }

    // 輸出加法結果
    printf("%d+%d=%d\n", x, y, x + y);

    // 輸出乘法結果
    printf("%d*%d=%d\n", x, y, x * y);

    // 輸出減法結果
    printf("%d-%d=%d\n", x, y, x - y);

    // 輸出除法結果（商和餘數）
    printf("%d/%d=%d...%d\n", x, y, quotient, remainder);

    return 0; // 程式正常結束
}
