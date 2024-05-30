#include <stdio.h>
void swap(int a, int b); // �Լ�(call by value) ����
int main(void) {
    int a = 10, b = 20;
    printf("swap() ȣ�� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
    printf("---------------------------\n");
    swap(a, b); // �Լ�ȣ�� (just ȣ��, ��ȯ��X)
    printf("---------------------------\n");
    printf("swap() ȣ�� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
}
// �Լ� ���� (=�Լ� ����)
// �̷��� �Ǹ� �ȵ�!! ��(X)�� �ƴ� �ּ�(O)�� ���޵Ǿ�� ��
void swap(int a, int b){
    printf("�Լ� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
    int temp = a;
    a = b;
    b = temp;
    printf("�Լ� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
}