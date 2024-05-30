#include <stdio.h>
// 구조체 : 여러 형태의 데이터를 하나의 단일 자료형으로 
struct student { // 구조체를 정의
    int num;      // 학번 (student 구조체 멤버) 4byte
    double grade; // 학점 (student 구조체 멤버) 8byte
};

int main(void) {
    int i = 1;
    struct student s1 = {101, 4.43}; // 초기화 안하면 쓰레기 값 들어있음
    printf("학번 = %d, 학점 = %.2lf\n", s1.num, s1.grade);
}