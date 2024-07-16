#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = N-i; j <= N; j++){
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}