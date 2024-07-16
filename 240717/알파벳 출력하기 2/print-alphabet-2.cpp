#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    char a = 'A';
    char b = 'A';

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = n; j > i; j--){
            cout << a << ' ';
            a = a + 1;
            if (a == b)
                a = b;
        }
        
        cout << endl;
    }
    return 0;
}