#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    
    scanf("%s", &str);
    strcat(str, "??!");

    printf("%s", str);
    
    return 0;
    }