#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int en = 0;
    int cnt = 1;

    while (1){
        if (cnt == n)
            en = 1;

        if (en == 0){
            for (int i = 1; i <= cnt; i++)
                cout << '*';
            cout << endl << endl;
            cnt++;
        }
        else{
            for (int i = cnt; i > 0; i--)
                cout << '*';
            cout << endl << endl;
            cnt--;
        }
        if (cnt == 0)
            break;
    }
    return 0;
}