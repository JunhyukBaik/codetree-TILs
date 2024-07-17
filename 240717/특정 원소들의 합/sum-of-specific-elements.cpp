#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<vector<int>> v(4, vector<int>(4,0));

    for (int i = 0; i < 4; i++){
        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    }

    cout << v[0][0] + v[1][0] + v[1][1] + v[2][0] + v[2][1] + v[2][2] + v[3][0] + v[3][1] + v[3][2] + v[3][3];

    return 0;
}