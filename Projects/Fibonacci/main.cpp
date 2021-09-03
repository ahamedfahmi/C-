#include <iostream>


using namespace std;
int fib(int num);
int main()
{
    // fib 1 , 1 ,2 , 3, 5 , 8 , 13
    //don't return bigger number , it might doesn't work
    //so try small number Ex : less than 50
    // I have to debug to find bigger numbers
   cout<<fib(50);


    return 0;
}

int fib(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
    {
        return fib(num-1) + fib(num-2);
    }
}