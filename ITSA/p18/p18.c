#include <stdio.h>

int main() {
    long long total_seconds; // 定義總秒數（輸入）
    int days, hours, minutes, seconds; // 定義天數、小時、分鐘和秒數

    // 輸入總秒數
    scanf("%lld", &total_seconds);

    // 計算天數
    days = total_seconds / 86400; // 每天有 86400 秒
    total_seconds %= 86400;       // 剩餘的秒數

    // 計算小時數
    hours = total_seconds / 3600; // 每小時有 3600 秒
    total_seconds %= 3600;        // 剩餘的秒數

    // 計算分鐘數
    minutes = total_seconds / 60; // 每分鐘有 60 秒
    seconds = total_seconds % 60; // 剩餘的秒數

    // 輸出結果
    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);

    return 0; // 程式正常結束
}
