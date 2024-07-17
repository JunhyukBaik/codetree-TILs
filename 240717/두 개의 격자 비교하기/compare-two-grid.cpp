#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v1(n, vector<int>(m,0));
    vector<vector<int>> v2(n, vector<int>(m,0));
    
    for(int i = 0; i <n; i++){
        for (int j = 0; j < m; j++)
            cin >> v1[i][j];
    }

    for(int i = 0; i <n; i++){
        for (int j = 0; j < m; j++)
            cin >> v2[i][j];
    }

    for(int i = 0; i <n; i++){
        for (int j = 0; j < m; j++){
            if (v1[i][j] == v2[i][j])
                v1[i][j] = 0;
            else
                v1[i][j] = 1;
            
            cout << v1[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}