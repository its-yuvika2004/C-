#include <iostream>
using namespace std;
int main() {
    double num1,num2;
    char operation;
    cout<<"Simple Calculator"<<endl;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    cout<<"Enter an operation (+, -, *, /): ";
    cin>>operation;

    if(operation=='+') {
        cout<<"Result: "<<num1 + num2<<endl;
    }
    else if(operation=='-'){
        cout<<"Result: "<< num1 - num2<<endl;
    }
    else if(operation=='*') {
        cout<<"Result: "<<num1 * num2<<endl;
    }
    else if(operation=='/') {
        if(num2 != 0){
            cout<<"Result: "<<num1 / num2<<endl;
        }
        else{
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
    }
    else{
        cout<<"Error: Invalid operation."<<endl;
    }

    return 0;
}
