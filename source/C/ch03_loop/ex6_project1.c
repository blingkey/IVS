#include <stdio.h>
int main(void) {
    //printf("구구단을 몇 단부터 출력할지 최소 구구단수와 최대 구구단수 >> \n");
    //scanf
    /* 내가 짠 코드
    // 임의로 2~7단까지 출력
    printf("구구단 2 ~ 7단 출력\n");
    for(int i=1; i<10; i++) {
        for(int j=2; j<8; j++){
            printf("%d * %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
    */
   int from=2, to=7;
   for(int i=1; i<10; i++) {
    for(int dansu=from; dansu <= to; dansu++){
        printf("%d x %d = %d\t", dansu, i, dansu*i);
    }
    printf("\n");
   }
}