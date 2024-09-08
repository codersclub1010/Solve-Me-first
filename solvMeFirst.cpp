#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
    int sum=a+b;
    return sum;
}

int main() {
    int num1,num2;//Constraints for taking user input
    cout<<"Enter the first number (1 to 1000): ";
    cin>>num1;
    if(num1>1000) {
        cout<<"Enter the first number Again : ";
        cin>>num1;
    }
    cout<<"Enter the second number (1 to 1000): ";
    cin>>num2;
    if(num2>1000){
        cout<<"Enter the second number Again : ";
        cin>>num2;
    }
    int sum = solveMeFirst(num1,num2);
    cout<<("Sum of two number is : ",sum);
    return 0;
}
