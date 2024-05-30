#include <stdio.h>

struct list {
    int num;
    struct list* next;
};

int main(void) {
    struct list a  = {10, 0}, b = {20, 0}, c = {30, 0}; // ������ �ּ� ���� �ι�° �ڸ��� 0 ����
    struct list* head = &a;
    struct list* current;

    a.next = &b;
    b.next = &c;

    printf("��ü ������\n");
    current = head;
    while(current) { // 0�� False, 0 �̿��� ���� True 
        printf("%d\t", current -> num);
        current = current -> next;
    }
    // printf("head->num : %d\n", head->num);
    // printf("head->next->num : %d\n", head->next->num);
}
