#include <stdio.h>
struct student {
    int id;         // �й�
    char name[20];  // �̸� char* name; -> �̷��� �ϰ� scanf�� �ϸ� �ȵ�(���� �Ҵ� �ȵ�)
    double grade;
};

void stPrint(struct student s); // �Լ� ����

int main(void) {
    // ����ü ���� ����� �ʱ�ȭ
    struct student sArr[3] = {{101, "ȫ�浿", 4.43},
                              {102, "��浿", 3.43},
                              {103, "�ű浿", 4.01}}; // �޸� ����, �ʱ�ȭ
    /* �̷� ������ �ϸ� �� �ε������� �� �ֱ� ��-��
    sArr[0].id = 101;
    sArr[0].name = "ȫ�浿";
    */
    printf("�й�\t�̸�\t����\n");
    for(int idx=0; idx<3; idx++) {
        //printf("%d\t%s\t%.2lf\n", sArr[idx].id, sArr[idx].name, sArr[idx].grade);
        stPrint(sArr[idx]); // �Լ� ȣ��
   } // for
} // main

void stPrint(struct student s) { // stPrint �Լ� ȣ���ϸ�, �˾Ƽ� ����ü ���� �ѷ���
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}