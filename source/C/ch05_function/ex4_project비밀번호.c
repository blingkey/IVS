/* 프로젝트 : 비밀번호 마스터
(1) 문제 출력 부분 함수로 구현하기
문제 출력 함수 : void showQuestion(int level, int num1, int num2) call by value 함수
함수 선언 : 반환형 void
main() 함수 아래에 showQuestion() 함수 정의
몇 번째 문제인지 prinft() 문으로 출력
문제 출력
printf() 문으로 행 구분, 비밀번호(문제의 정답) 입력 안내 문구 출력

(2) 정답 입력받기
answer 변수에 저장될 답
입력값이 난수로 생성한 두 수를 곱한 갑소가 똑같은 경우
-> 정답 메시지 표시하고 다음 단계 문제 출제
두 수를 곱한 값과도 같지 않은 경우
-> 실패 메시지 출력하고 종료
3단계 모두 정답을 맞힐 경우 성공
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
int ans = 0;

int main(void) {
    srand((unsigned int)time(NULL)); // 난수 초기화
    int num1, num2 = rand()%5;
    
    //showQuestion();
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d레벨 구구단을 외자~\n", level);
    printf("힌트 : %d x %d >> ", num1, num2);
    scanf("%d", &ans);
    if(ans == num1*num2) {
        printf("%d단계 정답입니다.\n", level);
    }

}



//printf("비밀번호를 모두 맞췄습니다. 성공입니다.");

//printf("%d단계 오답입니다. 실패 종료입니다.\n", level);