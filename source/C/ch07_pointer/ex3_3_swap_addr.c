#include <stdio.h>
void swap_addr(int* a, int* b); // 함수(call by reference) 선언
int main(void) {
    int a = 10, b = 20;
    printf("swap_addr() 호출 전 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
    printf("---------------------------\n");
    swap_addr(&a, &b); // 함수의 매개변수로 포인트로 받음 -> 주소를 전달
    printf("---------------------------\n");
    printf("swap_addr() 호출 후 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
}
// 함수 구현 (=함수 정의)
void swap_addr(int* a, int* b){ // a,b(주소)를 전달받음
    printf("함수 안 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("함수 안 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", a, *a, b, *b);
}