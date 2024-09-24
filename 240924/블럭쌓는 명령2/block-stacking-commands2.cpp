#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    cin >> N >> K;

    vector<int> block(N, 0);

    for (int a = 0; a < K; a++) {
        int i, j;
        cin >> i >> j;

        for (i; i <= j; i++) {
            block[i-1]++;
        }

    }
    
    cout << *max_element(block.begin(), block.end());

    return 0;
}