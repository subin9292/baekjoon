// i!=j를 while문에서 이용하게 되면 i는 하나 커지고 j는 하나 작아지기에 설정하는 숫자에 따라 같은 경우가 안나오고 
//서로 지나치게 되는 경우 존재. i<j를 이용.
#include <stdio.h>

int main(){
    int arr[101];
    int n,m,i,j, tmp;

    scanf("%d %d", &n, &m);
    for(int k = 1; k<=n; k++){
        arr[k] = k;
    }

    for(int k = 0; k < m; k++){
        scanf("%d %d", &i, &j);
        while(i<j){
           tmp = arr[i];
           arr[i] = arr[j];
           arr[j] = tmp;
           i++;
           j--;
        }
    }

    for(int k = 1; k<=n; k++){
        printf("%d ", arr[k]);
    }

    return 0;
}