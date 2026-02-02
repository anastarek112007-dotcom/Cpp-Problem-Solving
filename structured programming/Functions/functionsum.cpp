#include <iostream>
using namespace std;
float AVGof3int(int num1,int num2,int num3);
int main ()
{
    int x,y,z;
    cout<<"enter num1 \n";
    cin>>x;
    cout<<"enter num2 \n";
    cin>>y;
    cout<<"enter num3 \n";
    cin>>z;
    cout<<AVGof3int(x,y,z);
}
float AVGof3int(int num1,int num2,int num3)
{
    
    return (num1+num2+num3)/3;
}
