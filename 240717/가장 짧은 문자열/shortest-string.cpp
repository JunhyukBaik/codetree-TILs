#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, c;

    cin >> a >> b >> c;

    int len1 = min( { a.length(), b.length(), c.length() } );
    int len2 = max( { a.length(), b.length(), c.length() } );

    cout << len2 - len1;

    return 0;
}