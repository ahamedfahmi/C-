#include <iostream>

using namespace std;

int main()
{
  int no;
  long factorial;

  cout<<"Enter a Number : ";
  cin>>no;

  factorial = 1;
  for (int r=no; r >= 1; r--) 
  {
    factorial = factorial * r;
  }

  cout<<"Factorial of "<<no<<" is "<<factorial; 

  return 0;

}
