#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int i = 0, j = s.length() - 1;
    while (i < j) {
        swap(s[i], s[j]);
        i++; j--;
    }

    cout << "Reversed string: " << s;
    return 0;
}
