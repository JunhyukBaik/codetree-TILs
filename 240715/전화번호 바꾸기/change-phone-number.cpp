#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    cout << s.substr(0, 3);
    cout << s.substr(8, 5);
    cout << s.substr(3, 5); 
    return 0;
}