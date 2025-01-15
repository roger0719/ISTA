#include <stdio.h>

int main() {
    int total_hours;  // 總工時
    int hourly_wage;  // 每小時工資
    double salary = 0; // 總薪水（結果）

    // 輸入總工時與每小時工資
    scanf("%d %d", &total_hours, &hourly_wage);

    // 計算薪水
    if (total_hours <= 60) {
        // 如果工時在 60 小時以內
        salary = total_hours * hourly_wage;
    } else if (total_hours <= 120) {
        // 如果工時在 61 到 120 小時之間
        salary = 60 * hourly_wage + (total_hours - 60) * hourly_wage * 1.33;
    } else {
        // 如果工時超過 120 小時
        salary = 60 * hourly_wage + 60 * hourly_wage * 1.33 + (total_hours - 120) * hourly_wage * 1.66;
    }

    // 輸出總薪水，保留小數點後一位
    printf("%.1f\n", salary);

    return 0; // 程式正常結束
}
