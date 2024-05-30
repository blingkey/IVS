#include <stdio.h>
// Call by value vs. Call by reference
void sum(int from, int to, int* tot); 
// from, to 변수에 int 값이 있다. | tot가 가리키는 주소값에 가면 int 값이 있다.
// -> 'tot'는 레퍼런스 변수
// -> 'from, to'는 기초데이터 타입
int main(void) {
    int a=1, b=100, tot;
    sum(a, b, &tot);
    printf("%d부터 %d까지 누적합은 %d\n", a, b, tot);
    
    a = 10, b = 100;
    sum(a, b, &tot);
    printf("%d부터 %d까지 누적합은 %d\n", a, b, tot); 

}
void sum(int from, int to, int* tot) {
    *tot = 0; // tot가 가리키는 곳의 값
    for(int i=from; i<=to; i++) {
        *tot += i;
    }
}