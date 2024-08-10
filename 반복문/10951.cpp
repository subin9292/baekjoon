// cin, cout -> true, false 반환
// scanf -> 입력 2개 받으면 2를 리턴. 데이터를 읽다가 파일의 끝에 도달하면 -1 반환

#include <iostream>

using namespace std;

int main(){
    int n1, n2;

    while(cin >> n1 >> n2){
        cout << n1+n2 << endl;
    }

    return 0;
}