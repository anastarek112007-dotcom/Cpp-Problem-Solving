#include <iostream>
using namespace std;
int main()
{
    //compute average of students' grades
    float x[3];
    for (int i=0;i<=2;i++)
    {
        cout<<"enter grade "<<i+1<<"\n";
        cin>>x[i];
    }
    cout<<(x[0]+x[1]+x[2])/3;
    return 0;
}