#include <stdio.h>
// Call by value vs. Call by reference
void sum(int from, int to, int* tot); 
// from, to ������ int ���� �ִ�. | tot�� ����Ű�� �ּҰ��� ���� int ���� �ִ�.
// -> 'tot'�� ���۷��� ����
// -> 'from, to'�� ���ʵ����� Ÿ��
int main(void) {
    int a=1, b=100, tot;
    sum(a, b, &tot);
    printf("%d���� %d���� �������� %d\n", a, b, tot);
    
    a = 10, b = 100;
    sum(a, b, &tot);
    printf("%d���� %d���� �������� %d\n", a, b, tot); 

}
void sum(int from, int to, int* tot) {
    *tot = 0; // tot�� ����Ű�� ���� ��
    for(int i=from; i<=to; i++) {
        *tot += i;
    }
}