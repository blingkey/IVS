#include <stdio.h>
// �Ǽ��� (float 4byte, double 8byte) �Ҽ��� ������ �⺻�� double (float�� double �뷮�� ���̻�)
// ****float ���� �ʱ�!!****
// ������ (int 4byte, long long 8byte) �Ҽ��� ������ �⺻�� int
/*
int main(void) {
	int age = 20;
	long long money = 220000000L; // L: long type
	float f = 3.14159265359F; // F: float
	double d = 3.14159265359; // F�� ���̸� 4byte�� �Ҵ�Ǿ� �Ҽ��� �޺κ� ����
	printf("f = %.11f\n", f); // %.11f �Ҽ��� 11�ڸ� ����ض� -> ��°� f = 3.14159274101
	printf("d = %.11lf\n", d); // ��°� d = 3.14159265359
	if (f == d) {
		printf("f�� d�� ����\n\n");
	}
	else {
		printf("f�� d�� ���� �ʴ�\n\n"); //f = 3.14159274101 != d = 3.14159265359
	}

	f = 10.1F;
	d = 10.1;
	printf("f = %.11f\n", f); // ��°� f = 10.10000038147
	printf("d = %.11lf\n", d); // ��°� d = 10.10000000000
	if (f == d) {
		printf("f�� d�� ����\n");
	}
	else {
		printf("f�� d�� ���� �ʴ�\n"); //f = 10.10000038147 != d = 10.10000000000
	}
}
*/