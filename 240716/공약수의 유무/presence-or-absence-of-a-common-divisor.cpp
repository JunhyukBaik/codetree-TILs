#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = a; i <= b; i++){
        if ((1920 % i == 0) and (2880 % i == 0)){
            cnt++;
            break;
        }
    }

    cout << cnt;
    return 0;
}