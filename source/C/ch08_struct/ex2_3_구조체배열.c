#include <stdio.h>
struct student {
    int id;         // 학번
    char name[20];  // 이름 char* name; -> 이렇게 하고 scanf로 하면 안됨(변수 할당 안됨)
    double grade;
};

void stPrint(struct student s); // 함수 선언

int main(void) {
    // 구조체 변수 선언과 초기화
    struct student sArr[3] = {{101, "홍길동", 4.43},
                              {102, "김길동", 3.43},
                              {103, "신길동", 4.01}}; // 메모리 잡힘, 초기화
    /* 이런 식으로 하면 각 인덱스마다 값 넣기 불-편
    sArr[0].id = 101;
    sArr[0].name = "홍길동";
    */
    printf("학번\t이름\t학점\n");
    for(int idx=0; idx<3; idx++) {
        //printf("%d\t%s\t%.2lf\n", sArr[idx].id, sArr[idx].name, sArr[idx].grade);
        stPrint(sArr[idx]); // 함수 호출
   } // for
} // main

void stPrint(struct student s) { // stPrint 함수 호출하면, 알아서 구조체 변수 뿌려짐
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}