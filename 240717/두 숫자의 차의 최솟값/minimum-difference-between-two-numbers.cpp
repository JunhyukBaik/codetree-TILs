#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int min = 100;

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i+1; j < n; j++){
            min = ((v[j] - v[i]) < min) ? (v[j] - v[i]) : min;
        }
    }
    cout << min;
    return 0;
}