#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL)); // ���� �ʱ�ȭ
    int CHANCE = 5;
    int ans = rand()%100+1;
    int input = 0;

    while(CHANCE > 0){
        printf("1���� 100 ������ ���ڸ� ���� ������(���� ��ȸ : %d��) ", CHANCE);
        scanf("%d", &input);

        if(ans > input) {
            printf("UP\n");
        } else if(ans <input) {
            printf("DOWN\n");
        } else {
            printf("�����Դϴ�.\n"); break;
        }
        CHANCE--;
        if(CHANCE == 0) {
            printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
        }
    }
    printf("���� %d�Դϴ�.\n", ans);
}