#include <stdio.h>
// �迭(array) : ���� �ڷ����� ���� (!= ���̽��� array)
int main(void) {
    // 2. �迭 ����� �ʱ�ȭ�� �� ����
    // �迭�� ũ�⸦ �������� ������... (���� ������..��)
    int subway[6] = {30,40,50}; // ������ �������� 0����
    for(int idx=0; idx<6; idx++){
        printf("subway[%d]=%d\n", idx, subway[idx]);
    }
    
}