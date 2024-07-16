#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int hh = n;
    int jj = 1;

    for (int i = 0; i < n*2; i++){
        if (i % 2 == 0){
            for (int j = 0; j < hh; j++){
                cout << "* ";
            }
            hh--;
            cout << '\n';
        }

        else{
            for (int j = 0; j < jj; j++){
                cout << "* ";
            }
            jj++;
            cout << '\n';
        }
    }
    return 0;
}