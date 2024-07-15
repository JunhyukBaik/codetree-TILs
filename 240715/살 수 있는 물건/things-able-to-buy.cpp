#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int c;
    cin >> c;
    if (c >= 3000)
        cout << "book";
    else{
        if (c >= 1000)
            cout << "mask";
        else
            cout << "no";
    }
    return 0;
}