#include <iostream>
using namespace std;

/*###############################
  # This is a Simple Calculator # 
#################################*/
int main() {
    //define variables
    float num1 , num2 , answer=0;
    char sign;

    //prompt for user & get user input
    cout<<"Enter the number 1 = ";
    cin>>num1;

    cout<<"Enter the number 2 = ";
    cin>>num2;

    cout<<"Enter the operator = ";
    cin>>sign;

    //calculation & condition & display output
    switch(sign)
    {
      case '+':
              cout<<"The answer is = "<<num1 + num2<<endl;
              break;

      case '-':
              cout<<"The answer is = "<< num1 - num2<<endl;
              break;

      case '/':
              cout<<"The answer is = "<<num1 / num2<<endl;
              break;  
      case '*':
              cout<<"The answer is = "<<num1 * num2<<endl;
              break;  

      default:
              cout<<"Invalid operator !!!";  
              return 0;                                        
    }

    return 0;
}
