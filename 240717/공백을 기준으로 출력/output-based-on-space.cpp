#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    
    getline(cin, str1);
    getline(cin, str2);

    int len1 = str1.length();
    int len2 = str2.length();

    for (int i = 0; i < len1; i++){
        if (str1[i] == ' ')
            continue;
        else
            cout << str1[i];
    }

    for (int i = 0; i < len2; i++){
        if (str2[i] == ' ')
            continue;
        else
            cout << str2[i];
    }

    return 0;
}