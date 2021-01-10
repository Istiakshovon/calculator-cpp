#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char**argv) {
    int num1,num2;
    string mathOperator;
    
    cout << "Enter a number : ";
    cin >> num1;
    cout << "Enter a math operator : ";
    cin >> mathOperator;
    cout << "Enter another number : ";
    cin >> num2;
    
    if(mathOperator == "+"){
        cout << num1+num2;
    }else if(mathOperator == "-"){
        cout << num1-num2;
    }else if(mathOperator == "*"){
        cout << num1*num2;
    }else if(mathOperator == "/"){
        cout << num1/num2;
    }else if(mathOperator == "^"){
        cout << pow(num1,num2);
    }else{
        cout << num1+num2;
    }
    
    
    return 0;
}
