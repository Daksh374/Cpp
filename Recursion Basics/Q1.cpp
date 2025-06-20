// PRINT NAME N TIMES USING RECURSION

#include <iostream>
using namespace std;

void name(int i, int n) {
    if (i > n) {
        return;
    }
    cout << "Daksh" << endl;
    name(i + 1, n);
}

int main() {
    int n;
    cout << "Enter value of n -> ";
    cin >> n;
    name(1, n);
    return 0;
}