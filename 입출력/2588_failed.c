#include <stdio.h>

int main(){
    int num[3];
    int num3, num4, num5;
    int num1, num2;
    int mul = 1;
    int i = 2;
    int j = 1;

    scanf("%d%d", &num1, &num2);

    for(; i>=0; i--){
        for( ; j<=9; j++){
            if((num2-j)%10==0)
                break;
        }   
            num[i] = j*mul;
            mul*= 10;
            j = 1;
         }

    num3 = num1*num[2];
    num4 = num1*num[1];
    num5 = num1*num[0];

    printf("%d\n%d\n%d\n%d", num3, num4, num5, num3+num4*10+num5*100);
}