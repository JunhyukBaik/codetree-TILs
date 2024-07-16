#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double sum = 0;
    int cnt = 0;

    while (1){
        int two;
        cin >> two;

        if (two >= 20 and two < 30){
            sum += two;
            cnt++;
        }
        else
            break;
    }

    cout << fixed;
    cout.precision(2);

    cout << sum / cnt;
    
    return 0;
}