#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < 4; i++){
        for (int j = b; j >= a; j--){
            cout << j << " * " << 2*(i+1) << " = " << j*(2*(i+1)) << ' ';
            if (j != a)
                cout << "/ ";
        }
        cout << endl;
    }
    return 0;
}