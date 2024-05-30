#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL)); // 난수 초기화
    int CHANCE = 5;
    int ans = rand()%100+1;
    int input = 0;

    while(CHANCE > 0){
        printf("1부터 100 사이의 숫자를 맞춰 보세요(남은 기회 : %d번) ", CHANCE);
        scanf("%d", &input);

        if(ans > input) {
            printf("UP\n");
        } else if(ans <input) {
            printf("DOWN\n");
        } else {
            printf("정답입니다.\n"); break;
        }
        CHANCE--;
        if(CHANCE == 0) {
            printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다.\n");
        }
    }
    printf("답은 %d입니다.\n", ans);
}