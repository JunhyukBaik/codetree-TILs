#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);

    int cnt = 0;

    for (int i = 0; i <n; i++){
        cin >> v[i];
        if (v[i] == 2){
            cnt++;
        }
        if (cnt == 3){
            cout << i + 1;
            break;
        }
    }
    return 0;
}