#include <stdio.h>

int main() {
    int start_hour, start_minute; // 起始時間（小時與分鐘）
    int end_hour, end_minute;     // 結束時間（小時與分鐘）
    int total_minutes;            // 總停車時間（以分鐘計）
    int cost = 0;                 // 停車費用

    // 輸入起始時間與結束時間
    scanf("%d %d", &start_hour, &start_minute);
    scanf("%d %d", &end_hour, &end_minute);

    // 計算總停車時間（以分鐘為單位）
    total_minutes = (end_hour * 60 + end_minute) - (start_hour * 60 + start_minute);

    // 忽略未滿半小時的部分
    if (total_minutes % 30 != 0) {
        total_minutes = total_minutes / 30 * 30;
    }

    // 計算費用
    if (total_minutes <= 120) {
        // 2 小時（120 分鐘）內，每半小時 30 元
        cost = total_minutes / 30 * 30;
    } else if (total_minutes <= 240) {
        // 超過 2 小時但未滿 4 小時，每半小時 40 元
        cost = 120 / 30 * 30 + (total_minutes - 120) / 30 * 40;
    } else {
        // 超過 4 小時，前 240 分鐘每半小時 40 元，超過部分每半小時 60 元
        cost = 120 / 30 * 30 + 120 / 30 * 40 + (total_minutes - 240) / 30 * 60;
    }

    // 輸出總費用
    printf("%d\n", cost);

    return 0; // 程式正常結束
}
