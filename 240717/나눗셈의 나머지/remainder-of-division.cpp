#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    vector<int> v(b, 0);

    int div;

    while (a > 1){
        div = a % b;
        v[div]++;
        a = a / b;
    }

    int sum = 0;

    for (auto iter = v.begin(); iter != v.end(); iter++){
        sum += pow(*iter, 2);
    }

    cout << sum;

    return 0;
}