#include <iostream>

using namespace std;

int main()
{
    char maritial,gender;
    int age;
    cout<<"Enter M if you married and S if you single\n";
    cin>>maritial;
    cout<<"Enter M if you male and F if you female\n";
    cin>>gender;
    cout<<"Enter your age\n";
    cin>>age;


    if (maritial == 'M'||maritial == 'm' || (maritial == 'S' && gender =='M' && age>30) || (maritial == 's' && gender =='m' && age>30) ||
        (maritial == 'S' && gender =='F' && age>25) || (maritial == 's' && gender =='f' && age>25))
        cout<<"you are ensuranse\n";
    else cout<<"you are not ensuranse\n";

    return 0;
}
