// C언어는 배열 자체를 return하지 못하므로 포인터를 return한다.
#include <stdio.h>
int* returnArray(int* ptr);
int main(void) {
    int arr[3] = {10, 20, 30};
    int* afterArr = returnArray(arr);
    printf("수정 전 : ");
    for(int idx=0; idx<3; idx++){
        printf("arr[%d] = %d\t", idx, arr[idx]);
    }

    printf("\n수정 후 : ");
    for(int idx=0; idx<3; idx++){
        printf("afterArr[%d] = %d\t", idx, *(afterArr+idx));
    }
}
int* returnArray(int* ptr){
    // *(ptr+1) = 99;
    // ptr[1] = 99;
    // 하지만 arr 을 수정하고 싶진 않음!
    static int resultArr[3]; 
    for(int idx=0; idx<3; idx++){
        resultArr[idx] = ptr[idx];
    }
    resultArr[1] = 99;
    // 이렇게 해야 resultArr을 arr과 동일하게 만든 후에 수정할 수 있게 됨!
    return resultArr;

}