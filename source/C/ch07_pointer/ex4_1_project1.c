#include <stdio.h>
// �迭 ���� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�
void sort(int* arr, int cnt); // �Լ� ���� (cnt: �迭 ���� ����)
int main(void) {
    int lotto[6] = {41, 1, 35, 20, 45, 10};
    printf("���� �� : ");
    for(int idx=0; idx<6; idx++){
        printf("%d\t", lotto[idx]);
    }
    sort(lotto, 6); // call by reference
    printf("���� �� : ");
    for(int idx=0; idx<6; idx++){
        printf("%d\t", lotto[idx]);
    }
}

void sort(int* arr, int cnt) {
    for(int i=0; i<cnt-1; i++) {
        for(int j=i+1; j<cnt; i++) {
            if(arr[i] >= arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
            // else { //arr[i] < arr[j]
            //     continue;
            // }
        }
    }
}
