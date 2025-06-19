#include<iostream>
#include<vector>
using namespace std;

// VECTOR is a sequence container representing an array that can change in size.
// It is a dynamic array that can grow and shrink in size as needed.

void explainVector(){
    //DECLARATION
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);     //DONT NEED TO GIVE CURLY BRACES IN THIS FUNCN

    vector<int> v1(5,100);     // -> {100,100,100,100,100}

    vector<int> v2(v1);      // Value of v can be copied to v2


    // ACCESSING THE ELEMENTS USING ITERATORS
    vector<int>::iterator it = v.begin();     //points at the starting element
    it++;
    cout << *(it) <<endl ; 

    vector<int>::iterator it = v.end();  //it will point to the next of last element , i-- will point to last element

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;
    }

    // EASY ALTERNATIVE
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;
    }


    // DELETION IN VECTOR
    v.erase(v.begin()+1);   //THIS WILL DELETE THE 2nd ELEMENT FROM VECTOR
 
    //INSERT FUNCTION
    vector<int> v(2,100);     //{100,100}
    v.insert(v.begin(), 300);    //{300,100,100}

    v.insert(v.begin()+1 , 2, 50);   //{300,50,50,100,100}


    //{10,20}
    cout << v.size();    //2

    //{10,20}
    v.pop_back();  //{10}

    //v1 = {1,2}
    //v2 = {3,4}
    v1.swap(v2);   //v1 = {3,4} , v2 = {1,2}

    v.clear();   //erases the entire vector

    cout << v.empty();  //Returns True/False

}


// LIST AND DEQUE ALSO HAVE SAME FUNCTIONS AS VECTORS