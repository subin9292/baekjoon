#include <stdio.h>

int main(){
    int t1,t2,t3,t4;
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    t1 = (a+b)%c;
    t2 = ((a%c) + (b%c))%c;
    t3 = (a*b)%c;
    t4 = ((a%c)*(b%c))%c;

    printf("%d\n%d\n%d\n%d", t1, t2, t3, t4);

    return 0;
}