#include <iostream>

using namespace std;

int main()
{
    int a,b,r,temp;
    cout<<"Enter two integers (the bigger first)\n";
    cin>>a>>b;

    while (b != 0)
    {
        temp = b;
        r = a%b;
        b = r;
        a = temp;
    }
    cout << a;
    return 0;
}
