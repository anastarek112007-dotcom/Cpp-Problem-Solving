#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"Enter number\n";
    cin>>n;
    if (n>0)
    cout<<"Your number positive\n";
    else if (n<0)
    cout<<"Your number negative\n";
    else cout<<"Your number equal 0\n";
    return 0;
}