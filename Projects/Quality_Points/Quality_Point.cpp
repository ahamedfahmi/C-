#include <iostream>
using namespace std;

int qualitypoints(int average);

int main()
{
    int avg;
    int point ;

    cout<<"Enter the average marks = ";
    cin>>avg;


    point = qualitypoints(avg);
    cout<<"The quality point for "<<avg<<" is = "<<point<<endl;


    return 0;
}

int qualitypoints(int average)
{
    int qp;
    if (average <=100 & average >= 90)
        qp = 4;
    else if (89 >= average && average >= 80)
        qp = 3;
    else if (79 >= average && average >= 70)
        qp = 2;
    else if (69 >= average && average >= 60)
        qp = 1;
    else
        qp = 0;

    return qp;
}
