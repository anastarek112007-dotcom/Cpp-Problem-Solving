#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter 3 int\n";
    cin>>x>>y>>z;

    if (x>y&&x>z)
      cout<<setw(10)<<x<<":\t"<<setw(10)<<"is the max\n";
    else if (y>x && y>z)
      cout<<setw(10)<<y<<":\t"<<setw(10)<<"is the max\n";
    else if ((z>x && y<z))
     cout<<setw(10)<<z<<":\t"<<setw(10)<<"is the max\n";
    else cout<<"there are two equal\n";
    
    if (x<y&&x<z)
      cout<<setw(10)<<x<<":\t"<<setw(10)<<"is the mini\n";
    else if (y<x && y<z)
      cout<<setw(10)<<y<<":\t"<<setw(10)<<"is the mini\n";
    else if ((z<x && y>z))
     cout<<setw(10)<<z<<":\t"<<setw(10)<<"is the max\n";
    else cout<<"there are two equal\n";
    
        
    return 0;

}