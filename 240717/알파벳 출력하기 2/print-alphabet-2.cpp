#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    char a = 'A';

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = n; j > i; j--)
            cout << a++ << ' ';
        
        cout << endl;
    }
    return 0;
}