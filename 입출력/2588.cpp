#include <iostream>

using namespace std;

int main(){
    int arr[3];
    int n1, n2;

    cin >> n1 >> n2;

    arr[0] = n2/100;  // 백의 자리
    arr[1] = (n2 - (arr[0] * 100)) / 10;   //십의 자리
    arr[2] = n2%10;   // 일의 자리


    cout << n1*arr[2] << endl;
    cout << n1*arr[1] << endl;
    cout << n1*arr[0] << endl;

    cout << n1*n2 << endl;

    return 0;
}