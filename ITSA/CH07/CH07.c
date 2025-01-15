#include <stdio.h>

int main() {
    int height, gender; // 身高與性別的變數
    float standard_weight; // 用於儲存計算的標準體重

    //printf("請輸入身高與性別（格式：身高 性別，1代表男性，2代表女性）：\n");

    // 持續讀取輸入直到文件結束 (EOF)
    while (scanf("%d %d", &height, &gender) == 2) {
        if (gender == 1) {
            // 計算男性標準體重
            standard_weight = (height - 80) * 0.7;
        } else if (gender == 2) {
            // 計算女性標準體重
            standard_weight = (height - 70) * 0.6;
        } else {
            printf("性別代碼錯誤，請輸入 1 或 2。\n");
            continue; // 跳過本次迴圈
        }

        // 輸出結果，保留到小數點後一位
        printf("%.1f\n", standard_weight);
    }

    return 0;
}
