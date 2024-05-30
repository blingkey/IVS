#include <stdio.h>
// 배열 안의 값을 오름차순 정렬하는 함수를 구현하시오
void sort(int* arr, int cnt); // 함수 선언 (cnt: 배열 방의 개수)
int main(void) {
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("정렬 전 : ");
    for(int idx=0; idx<6; idx++){
        printf("%d\t", lotto[idx]);
    }
    sort(lotto, 6); // call by reference
    printf("정렬 후 : ");
    for(int idx=0; idx<6; idx++){
        printf("%d\t", lotto[idx]);
    }
}

void sort(int* arr, int cnt) {
    for(int i=0; i<cnt-1; i++) {
        for(int j=i+1; j<cnt; i++) {
            if(arr[i] >= arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
            // else { //arr[i] < arr[j]
            //     continue;
            // }
        }
    }
}
