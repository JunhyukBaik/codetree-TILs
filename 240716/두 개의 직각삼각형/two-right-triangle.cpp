#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = n-i; j > 0; j--)
            cout << '*';

        for (int j = 0; j < i*2; j++)
            cout << ' ';

        for (int j = n-i; j > 0; j--)
            cout << '*';
        cout << endl;
    }

    return 0;
}