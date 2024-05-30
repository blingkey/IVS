#include <stdio.h>
// 서식 지정자 : %d, %f, %lf, %c, %s
/*
int main(void) {
	int num1 = 10;
	int num2 = 11;
	printf("두 수의 합 = %d\n", num1 + num2);
	// 정수형(4byte)과 정수형(4byte) 사칙연산 결과는 정수형(4byte) (JAVA, C)
	// so11. 2.0 으로 나눔으로써 8byte를 할당받음. 2로 나누면 4byte를 할당받아 결과값이 제대로 안나옴
	printf("두 수의 평균 = %.2lf\n", (num1 + num2) / 2.0); // %f는 소수점이 변질될 수 있으므로 %lf 사용
	// sol2. 형변환
	printf("두 수의 평균 = %.2lf\n", ((double)num1 + num2) / 2.0);
}
*/