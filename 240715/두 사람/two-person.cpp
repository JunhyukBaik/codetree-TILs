#include <iostream>
#include <tuple>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char a1, b1;

    cin >> a >> a1;
    cin >> b >> b1;

    if (a >= 19 or b >= 19){
        if (a1 == 'M' or b1 == 'M')
            cout << 1;
        else
            cout << 0;
    }
    else
        cout << 0;
    return 0;
}