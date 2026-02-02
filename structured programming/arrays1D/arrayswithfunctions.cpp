#include <iostream>
using namespace std;
void readarraydata(float x[3])
{
    for (int i=0;i<=2;i++)
    {
        cout<<"enter grade "<<i+1<<"\n";
        cin>>x[i];
    }
}
void printdata(float x[3])
{
    cout<<(x[0]+x[1]+x[2])/3;
}
int main (){
    float x[3];
    readarraydata (x);
    printdata (x);
}