#include <stdio.h>

int main() {
    int points, rebounds, assists, steals, turnovers; // 定義五個輸入變數
    int mvp_score; // 定義 MVP 數值
    char grade; // 定義籃球員等級

    // 提示使用者輸入五個整數，分別代表平均得分、籃板數、助攻數、抄截數與失誤數
    //printf("請輸入平均得分、籃板數、助攻數、抄截數、失誤數（以空格分隔）：\n");
    scanf("%d %d %d %d %d", &points, &rebounds, &assists, &steals, &turnovers);

    // 計算 MVP 數值
    mvp_score = (points * 1) + (rebounds * 2) + (assists * 2) + (steals * 2) - (turnovers * 2);

    // 判斷 MVP 數值對應的等級
    if (mvp_score >= 45) {
        grade = 'A'; // A 級球員
    } else if (mvp_score >= 35) {
        grade = 'B'; // B 級球員
    } else if (mvp_score >= 25) {
        grade = 'C'; // C 級球員
    } else {
        grade = 'D'; // D 級球員
    }

    // 輸出結果
    //printf("MVP 數值：%d\n", mvp_score);
    printf("%c\n", grade);

    return 0;
}
