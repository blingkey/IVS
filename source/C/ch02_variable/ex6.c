#include <stdio.h>

int main(void) {
	char name[100], gender[10];
	int kor, eng, math = 0;
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("������ �Է��ϼ���(��/��) : ");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	printf("\n--- �л����� ---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� : %d\n", kor);
	printf("���� : %d\n", eng);
	printf("���� : %d\n", math);
	printf("�հ� : %d\n", kor+eng+math);
	printf("��� : %.2lf", (kor+eng+math)/(3.0));
}