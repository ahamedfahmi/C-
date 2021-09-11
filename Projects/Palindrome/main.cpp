#include <iostream>
#include "algorithm"
using namespace std;

 /*********************************************
 * This Program is a Palindrome Word checker *
 *********************************************/


int main()
{
    //declare variables
    string word;
    string revWord;
    string output;

    //get input from user
    cout<<"Enter the Word : ";
    cin >> word;

    //assign variable
    revWord = word;

    //main algorithm
    reverse(revWord.begin(),revWord.end());

    //condition
    if (revWord == word)
    {
        output = "This is a Palindrome Word";
    }
    else
    {
        output = "This is not a Palindrome word";
    }

    //display output
    cout<<output;




   return 0;
}

