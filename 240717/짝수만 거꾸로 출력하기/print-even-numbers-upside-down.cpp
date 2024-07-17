#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i= 0; i<n; i++){
        cin >> v[i];
    }

    for (int i = n-1; i >=0; i--){
        if (v[i] % 2 == 0)
            cout << v[i] << ' ';
    }
    
    return 0;
}