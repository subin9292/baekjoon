// printf -> %f(부동소수점 출력시--double, flaot), %ld(긴 정수)
// (double)(a/b) -> 이는 정수끼리의 나눗셈을 수행함으로 결과도 정수로 나옴. (double)a / b로 해야함.

#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%.9f", (double)a/b);

    return 0;
}