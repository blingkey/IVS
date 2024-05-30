#include <stdio.h>
// 배열(array) : 동일 자료형의 집합 (!= 파이썬의 array)
int main(void) {
    // 2. 배열 선언과 초기화를 한 번에
    // 배열의 크기를 생략하지 않으면... (여기 못적음..ㅎ)
    int subway[6] = {30,40,50}; // 나머지 공간에는 0으로
    for(int idx=0; idx<6; idx++){
        printf("subway[%d]=%d\n", idx, subway[idx]);
    }
    
}