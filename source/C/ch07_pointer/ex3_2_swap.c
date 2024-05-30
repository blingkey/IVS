#include <stdio.h>
void swap(int a, int b); // 함수(call by value) 선언
int main(void) {
    int a = 10, b = 20;
    printf("swap() 호출 전 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
    printf("---------------------------\n");
    swap(a, b); // 함수호출 (just 호출, 반환값X)
    printf("---------------------------\n");
    printf("swap() 호출 후 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
}
// 함수 구현 (=함수 정의)
// 이렇게 되면 안됨!! 값(X)이 아닌 주소(O)가 전달되어야 함
void swap(int a, int b){
    printf("함수 안 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("함수 안 \na주소 : %p, a값 : %d\nb주소 : %p, b값 : %d\n", &a, a, &b, b);
}