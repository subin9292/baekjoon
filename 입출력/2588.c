#include <stdio.h>

int main(){
    int arr[3];
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    arr[0] = n2/100;  // 백의 자리
    arr[2] = n2%10;   // 일의 자리
    arr[1] = (n2 - (arr[0] * 100)) / 10;   //십의 자리

    printf("%d\n", n1*arr[2]);
    printf("%d\n", n1*arr[1]);
    printf("%d\n", n1*arr[0]);

    printf("%d", n1*n2);

    return 0;
}