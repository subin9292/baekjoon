// 배열에 문자열을 받을 대 문자열길이+1개로 선언해야함. \n 넣을자리.
// string s; 선언후 s[2] 처럼 배열로 사용 가능

#include <iostream>

using namespace std;

int main(){
    char arr[1001];
    int n;

    cin >> arr >> n;

    cout << arr[n-1];

    return 0;
}