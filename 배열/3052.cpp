#include <iostream>

using namespace std;

int main(){
    int arr[43] = {0};
    int n, count = 0;

    for(int i = 0; i<10; i++){
        cin >> n;
        arr[n%42] = 1;
    }

    for(int j = 0; j<43; j++){
        if(arr[j]!=0)
        count++;
    }

    cout << count;

    return 0;
}