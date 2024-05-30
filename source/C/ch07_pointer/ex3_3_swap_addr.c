#include <stdio.h>
void swap_addr(int* a, int* b); // �Լ�(call by reference) ����
int main(void) {
    int a = 10, b = 20;
    printf("swap_addr() ȣ�� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
    printf("---------------------------\n");
    swap_addr(&a, &b); // �Լ��� �Ű������� ����Ʈ�� ���� -> �ּҸ� ����
    printf("---------------------------\n");
    printf("swap_addr() ȣ�� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", &a, a, &b, b);
}
// �Լ� ���� (=�Լ� ����)
void swap_addr(int* a, int* b){ // a,b(�ּ�)�� ���޹���
    printf("�Լ� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", a, *a, b, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("�Լ� �� \na�ּ� : %p, a�� : %d\nb�ּ� : %p, b�� : %d\n", a, *a, b, *b);
}