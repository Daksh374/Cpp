#include <iostream>
#include <utility>
using namespace std;

int main() {
   
    pair<int, int> p1 = {10, 20};
    
    // Accessing elements of the pair
    cout << "First element: " << p1.first << endl;
    cout << "Second element: " << p1.second << endl;

  
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "First element of p2: " << p2.first << endl;
    cout << "Second element of p2: " << p2.second.first << endl;
    cout << "Third element of p2: " << p2.second.second << endl;

    pair<string, int> p3 = {"Age", 25};
    cout << "Key: " << p3.first << ", Value: " << p3.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << ", " << arr[1].second << endl;


    return 0;
}