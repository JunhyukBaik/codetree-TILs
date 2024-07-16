#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        int js;
        cin >> js;

        if (js % 3 == 0 and js % 2 == 1)
            cout << js << endl;
    }
    return 0;
}