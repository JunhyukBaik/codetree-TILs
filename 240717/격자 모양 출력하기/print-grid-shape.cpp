#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    
    int arr[10][10] = {};
    
    int ii;
    int jj;

    for (int i = 0; i < m; i++){
        cin >> ii >> jj;
        arr[ii-1][jj-1] = ii * jj;
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}