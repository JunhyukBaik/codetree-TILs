#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        if (i == 0 or i == n-1){
            for (int j = 0; j < n; j++)
                cout << "* ";
        }

        else{
            for (int j = 0; j < i; j++)
                cout << "* ";
            for (int j = n-i-1; j > 0; j--)
                cout << "  ";
        }

        if (i > 0 and i < n-1)
            cout << '*';

        cout << '\n';
    }

    return 0;
}