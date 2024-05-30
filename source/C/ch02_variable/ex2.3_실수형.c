#include <stdio.h>
// 실수형 (float 4byte, double 8byte) 소수점 있으면 기본이 double (float와 double 용량의 차이뿐)
// ****float 쓰지 않기!!****
// 정수형 (int 4byte, long long 8byte) 소수점 없으면 기본이 int
/*
int main(void) {
	int age = 20;
	long long money = 220000000L; // L: long type
	float f = 3.14159265359F; // F: float
	double d = 3.14159265359; // F를 붙이면 4byte로 할당되어 소수점 뒷부분 날라감
	printf("f = %.11f\n", f); // %.11f 소수점 11자리 출력해라 -> 출력값 f = 3.14159274101
	printf("d = %.11lf\n", d); // 출력값 d = 3.14159265359
	if (f == d) {
		printf("f와 d는 같다\n\n");
	}
	else {
		printf("f와 d는 같지 않다\n\n"); //f = 3.14159274101 != d = 3.14159265359
	}

	f = 10.1F;
	d = 10.1;
	printf("f = %.11f\n", f); // 출력값 f = 10.10000038147
	printf("d = %.11lf\n", d); // 출력값 d = 10.10000000000
	if (f == d) {
		printf("f와 d는 같다\n");
	}
	else {
		printf("f와 d는 같지 않다\n"); //f = 10.10000038147 != d = 10.10000000000
	}
}
*/