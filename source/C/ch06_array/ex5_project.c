/* ������, ������, ������, ���밥, �������� Ű�� �Է¹޾�
    ��»��� : ��� : 170.5
               ����: ������ 190
               �ִ� : ������ 120
*/

#include <stdio.h>

int main(void) {
    char* names[] = {"������","������","������","���밥","������"};
    int arrHeight[5]; // ģ���� Ű �Է� �迭
    int totHeight = 0; // Ű ��������
    int idxMin, minHeight = 999; // �ִܽ��� ���ϱ� ���� ������(index, Ű��);
    int idxMax, maxHeight = -1; // ������� ���ϱ� ���� ������(index, Ű��);

    for(int idx=0; idx < 5; idx++){
        printf("%s ", names[idx]);
    }
    printf("%d", sizeof(names));
    printf("%d", sizeof(arrHeight));
    // printf("�������� Ű �Է�(5��)\n");
    // for(int idx=0; idx < 5; idx++){
    //     printf("%d��° : ", idx);
    //     scanf("%d", names[idx]);
    // }
    // printf("�������� Ű >> ");
    // for(int idx=0; idx < 5; idx++){
    //     printf("%d", names[idx]);
    // }

    // for(int idx=0; idx<4; idx++) {
    //     if(names[idx] >= names[idx+1]){
    //         maxHeight = names[idx];
    //     } else{
    //         minHeight = names[idx];
    //     }
    // }
    // printf("�ִ�Ű ģ�� : %s\n", minHeight);
    // printf("����Ű ģ�� : %s\n", maxHeight);
}