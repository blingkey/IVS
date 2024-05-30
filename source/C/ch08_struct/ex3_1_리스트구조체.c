#include <stdio.h>

struct list {
    int num;
    struct list* next;
};

int main(void) {
    struct list a  = {10, 0}, b = {20, 0}, c = {30, 0}; // 각각의 주소 몰라서 두번째 자리에 0 넣음
    struct list* head = &a;
    struct list* current;

    a.next = &b;
    b.next = &c;

    printf("전체 데이터\n");
    current = head;
    while(current) { // 0만 False, 0 이외의 수는 True 
        printf("%d\t", current -> num);
        current = current -> next;
    }
    // printf("head->num : %d\n", head->num);
    // printf("head->next->num : %d\n", head->next->num);
}
