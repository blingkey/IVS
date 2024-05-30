/* 유수민, 김현식, 땅땅이, 새대갈, 슘당이의 키를 입력받아
    출력사항 : 평균 : 170.5
               최장: 김현식 190
               최단 : 슘당이 120
*/

#include <stdio.h>

int main(void) {
    char* names[] = {"유수민","김현식","땅땅이","새대갈","슘당이"};
    int arrHeight[5]; // 친구들 키 입력 배열
    int totHeight = 0; // 키 누적변수
    int idxMin, minHeight = 999; // 최단신을 구하기 위한 변수들(index, 키값);
    int idxMax, maxHeight = -1; // 최장신을 구하기 위한 변수들(index, 키값);

    for(int idx=0; idx < 5; idx++){
        printf("%s ", names[idx]);
    }
    printf("%d", sizeof(names));
    printf("%d", sizeof(arrHeight));
    // printf("동물들의 키 입력(5명)\n");
    // for(int idx=0; idx < 5; idx++){
    //     printf("%d번째 : ", idx);
    //     scanf("%d", names[idx]);
    // }
    // printf("동물들의 키 >> ");
    // for(int idx=0; idx < 5; idx++){
    //     printf("%d", names[idx]);
    // }

    // for(int idx=0; idx<4; idx++) {
    //     if(names[idx] >= names[idx+1]){
    //         maxHeight = names[idx];
    //     } else{
    //         minHeight = names[idx];
    //     }
    // }
    // printf("최단키 친구 : %s\n", minHeight);
    // printf("최장키 친구 : %s\n", maxHeight);
}