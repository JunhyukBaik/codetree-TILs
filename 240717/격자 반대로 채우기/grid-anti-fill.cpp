#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n,0));

    int cnt = 0;
    int num = 1;

    for (int i = n-1; i >= 0; i--){
        if (cnt % 2 == 0){
            for (int j = n-1; j >= 0; j--){
                v[j][i] = num++;
            }
        }
        else{
            for (int j = 0; j < n; j++){
                v[j][i] = num++;
            }
        }
        cnt++;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << v[i][j] << ' ';
        cout << endl;
    }
    return 0;
}