#include <iostream>
using namespace std;
int main()
{
    int n,mark,hours,Ehours=0;
    int sum=0;
    cout<<"Enter the number of subjects \n";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the mark of the "<<i+1<<" sub \n";
        cin>>mark;
        cout<<"Enter number of hours for the subject "<<i+1<<endl;
        cin>>hours;
        
        Ehours+=hours;
        sum +=(mark*hours);
        
    }

    cout<<"Your GPA is: "<<sum/Ehours;
    return 0;
}
