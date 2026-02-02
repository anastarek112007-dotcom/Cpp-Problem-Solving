#include <iostream>
using namespace std;
int main(){
    int n=1,t1=0,t2=1;
    cout<<"fibonacci series \n";
    for (n=1;n<=10;n++)
    {cout<<t1<<" ";
    int next=t1+t2;
    t1=t2;
    t2=next;
    }
    return 0;
}