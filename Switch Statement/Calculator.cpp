#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    char op;
    cout << "Enter Your Choice (+,-,*,/)";
    cin>>op;
    switch (op)
    {
    case '+':
    cout <<"Addition of a and b is "<< a+b;
    break;

    case '-':
    cout <<"Subtraction of a and b is "<< a-b;
    break;

    case '*':
    cout <<"Miltiplication of a and b is "<< a*b;
    break;

    case '/':
    cout <<"Division of a and b is "<< a/b;
    break;

    default:
    cout<<"Invalid Operator";
        break;
    }
 
    
    
    
}