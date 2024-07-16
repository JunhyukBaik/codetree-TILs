#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int etr = 1;

    for (int i = 1; i <= n; i++){  
        if (i % 2 == 1){
            for (int j = etr; j < etr + n; j++)
                cout << j << ' ';
            etr = (etr + n - 1) + n;
        }
        else{
            for (int j = etr; j > etr - n; j--)
                cout << j << ' ';
            etr = etr + 1;
        }
        cout << endl;
    }
    return 0;
}