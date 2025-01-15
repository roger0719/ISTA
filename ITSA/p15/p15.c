#include <stdio.h>

int main() {
    int minutes;      // 定義通話分鐘數
    double cost;      // 定義通話費用 (結果為浮點數)

    // 讀取通話分鐘數
    scanf("%d", &minutes);

    // 計算費用
    if (minutes <= 800) {
        // 若分鐘數 <= 800，每分鐘費用 0.9 元
        cost = minutes * 0.9;
    } else if (minutes < 1500) {
        // 若分鐘數 <= 1500，所有費用打 9 折
        cost = minutes * 0.9 * 0.9;
    } else {
        // 若分鐘數 > 1500，所有費用打 79 折
        cost = minutes * 0.9 * 0.79;
    }

    // 格式化輸出費用，保留小數點後 1 位
    printf("%.1f\n", cost);

    return 0; // 程式正常結束
}
