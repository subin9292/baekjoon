// if elseif else != if if else !!!! 다름에 주의!

#include <iostream>

using namespace std;

int main(){
    int arr[7];
    int a, b, c, total, max;

    scanf("%d %d %d", &a, &b, &c);

    if(a!=b && a!=c && b!=c){
        if(a>b && a>c)
            max = a;
        else if(b>a && b>c)
            max = b;
        else
            max = c;

        total = max*100;
    }
    else if(a==b&&b==c){
        total = 10000 + a*1000;
    }
    else{
        if(a==b || a==c)
            total = 1000+a*100;
        else if(b==c)
            total = 1000+b*100;
        
    }

    printf("%d", total);

    return 0;
}