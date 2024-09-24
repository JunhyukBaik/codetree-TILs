#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int gugan[201] = {};

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        x1 += 100;
        x2 += 100;

        for (x1; x1 < x2; x1++)
            gugan[x1]++;
        
    }

    cout << *max_element(begin(gugan), end(gugan));

    return 0;
}