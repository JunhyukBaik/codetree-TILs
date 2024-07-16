#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    int start = 1;
    
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            for (int j = start; j < start + n; j++){
                cout << j << ' ';
            }
            cout << '\n';
            start += n + 1;
        }
        else{
            for (int j = start; j < start + (2 * n-1); j = j + 2)
                cout << j << ' ';
            cout << '\n';
            start = start + (2 * n-1);
        }
    }
    return 0;
}