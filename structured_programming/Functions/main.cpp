#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    //ready made functions
    int i= -3;
    double x=5.0,y=2.0;

    cout<<"enter value to find the absolute value of it\n"; 
    cin>>i;
    cout<<"the absolute value of i is: "<<abs(i)<<"\n\n";

    cout<<"enter 2 values to find the power num1 to num2\n";
    cin>>x>>y;
    cout<<"the of num1 to num2 is: "<<pow(x,y)<<"\n\n";
}