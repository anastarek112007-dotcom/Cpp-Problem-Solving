
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks\n";
    cin>>marks;


    if (marks >= 50)
    {
        cout<<"You are pass\n";
        if (marks>=90)
        cout<<"your grade A+\n";
        if (marks>=85 && marks<90)
            cout<<"your grade A\n";
        if (marks >=70 && marks<85 )
            cout<<"your grade B\n";
        if (marks >=60 &&marks<70 )
            cout<<"your grade D\n";
        }
    else cout<<"your grade F";


    return 0;
}
