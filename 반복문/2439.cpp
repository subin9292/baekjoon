#include <iostream>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){  //0~4
        for(int j = 1; j < n-i; j++) // 4~1
            cout << " ";
        for(int k = 0; k <= i; k++)  // 1~5
             cout << "*";
        cout<<endl;
        
    }
}