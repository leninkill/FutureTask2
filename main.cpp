#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    // перевод в двоичную систему
    string str = "";
    while (n) {
        str = to_string(n % 2) + str;
        n = n / 2;
    }

    // cout << str << endl;

    int pairs = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            pairs += 1;
        }
    }

    cout << pairs;

    return 0;
}