#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;

    if (a % 3)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    
    if (a % 5)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
        
    return 0;
}