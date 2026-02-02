#include <iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter number\n";
    cin>>num;
    
    for (count=0;num!=0;num/=10)
      count ++;
      
    cout <<"Number Of digits = "<<count;
    return 0;  
}