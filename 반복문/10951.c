// 그런데 c던지 c++이던지 입력 받는게 끝나지는 않는다.

#include <stdio.h>

int main(){
    int n1, n2;

    while(scanf("%d %d", &n1, &n2)!=-1){
        printf("%d\n", n1+n2);
    }

    return 0;
}