#include <iostream>
using namespace std;

int main() {
    //define variables
    float num1 , num2 , answer;
    char sign;

    //prompt for user & get user input
    cout<<"Enter the number 1 =";
    cin>>num1;

    cout<<"Enter the number 2 =";
    cin>>num2;

    cout<<"Enter the operator =";
    cin>>sign;

    //calculation & condition
    if (sign == '+')
        answer = num1 + num2;
    else if (sign == '-')
        answer = num1 - num2;
    else if (sign == '/')
        answer = num1 / num2;
    else if (sign == '*')
        answer = num1 * num2;

    //Display output
    cout<<"The answer is = "<<answer<<endl;

    return 0;
}
