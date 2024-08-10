#include <stdio.h>

int main(){
    int n,m,i,j,num;
    int arr[100] = {0};

    scanf("%d %d", &n, &m);

    for(int l = 0; l < m; l++){
        scanf("%d %d %d", &i, &j, &num);
        for(int k = i-1; k<=j-1; k++){
            arr[k] = num;
        }
    }

    for(int l = 0; l<n; l++){
        printf("%d ", arr[l]);
    }

}