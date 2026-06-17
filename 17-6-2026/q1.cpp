#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << string(i - 1, ' ') << string((n - i) * 2 + 1, '*') << endl;
    }
    return 0;
}