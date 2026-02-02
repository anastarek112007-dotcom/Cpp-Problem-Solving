#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name\n";
    getline(cin,name);
    string age;
    cout<<"enter your age\n";
    cin>>age;

    cout<<"your name is "<<name<<" your age is "<<age<< endl;
}

