/* ������Ʈ : ��й�ȣ ������
(1) ���� ��� �κ� �Լ��� �����ϱ�
���� ��� �Լ� : void showQuestion(int level, int num1, int num2) call by value �Լ�
�Լ� ���� : ��ȯ�� void
main() �Լ� �Ʒ��� showQuestion() �Լ� ����
�� ��° �������� prinft() ������ ���
���� ���
printf() ������ �� ����, ��й�ȣ(������ ����) �Է� �ȳ� ���� ���

(2) ���� �Է¹ޱ�
answer ������ ����� ��
�Է°��� ������ ������ �� ���� ���� ���Ұ� �Ȱ��� ���
-> ���� �޽��� ǥ���ϰ� ���� �ܰ� ���� ����
�� ���� ���� ������ ���� ���� ���
-> ���� �޽��� ����ϰ� ����
3�ܰ� ��� ������ ���� ��� ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
int ans = 0;

int main(void) {
    srand((unsigned int)time(NULL)); // ���� �ʱ�ȭ
    int num1, num2 = rand()%5;
    
    //showQuestion();
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d���� �������� ����~\n", level);
    printf("��Ʈ : %d x %d >> ", num1, num2);
    scanf("%d", &ans);
    if(ans == num1*num2) {
        printf("%d�ܰ� �����Դϴ�.\n", level);
    }

}



//printf("��й�ȣ�� ��� ������ϴ�. �����Դϴ�.");

//printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�.\n", level);