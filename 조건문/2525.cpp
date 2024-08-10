#include <iostream>

using namespace std;

int main(){
    int h,m,n,mt, ht;

    scanf("%d %d %d", &h, &m, &n);

    
    if(m+n>59){
        mt = m+n;
       while(mt>59){
        mt = mt-60;
        h = h+1;
    }  
    }  
    else
        mt = m+n;

    if(h>=24){
        while(h>=24){
            h = h - 24;
        }
        ht = h;
    }
    else
        ht = h;


    printf("%d %d", ht, mt);

    return 0;
}