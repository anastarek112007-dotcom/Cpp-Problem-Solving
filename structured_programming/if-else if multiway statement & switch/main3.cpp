#include <iostream> 
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age\n";
    cin>>age;

    if (age<13)
    cout<<"You are a child\n";
    else if (age<20)
    cout<<"You are a teenager\n";
    else if (age<60)
    cout<<"You are an adult\n";
    else cout<<"You are a Senior\n";
    return 0;
}