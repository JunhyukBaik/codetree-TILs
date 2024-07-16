#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int jj = n;
    int hh = 1;

    for (int i = 1; i <= n*2; i++){
        if (i % 2 == 1){
            for (int j = 0; j < hh; j++)
                cout << "* ";
            hh++;
            cout << endl;    
        }

        else{
            for (int j = jj; j > 0; j--)
                cout << "* ";
            jj--;
            cout << endl;    
        }
    }
    return 0;
}