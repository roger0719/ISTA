#include <stdio.h>

int main() {
    int m; // 和健行社友的相差距離（公尺）
    int relative_distance; // 換算成英吋的距離
    int seconds; // 超越所需的秒數

    // 讀取相差距離（公尺）
    scanf("%d", &m);

    // 將相差距離從公尺轉換為英吋（1 公尺 = 39.37 英吋）
    relative_distance = m * 39.37;

    // 計算速度差（每秒 1 公尺 = 39.37 英吋，每秒速度差 = 39.37 - 30 = 9.37 英吋）
    double speed_difference = 39.37 - 30;

    // 計算需要超越的秒數
    // 超越時間 = 相差距離（英吋） / 速度差（英吋/秒）
    seconds = (int)(relative_distance / speed_difference);

    // 輸出超越所需的秒數
    printf("%d\n", seconds+1);

    return 0; // 程式正常結束
}
