#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no of terms in the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
 
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
