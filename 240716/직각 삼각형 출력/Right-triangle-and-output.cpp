#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    string str = "*";
    cout << str << endl;

    for (int j = 1; j < n; j++){
        str.append(2, '*');
        cout << str << endl;
    }

    return 0;
}