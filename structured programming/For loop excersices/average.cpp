#include <iostream>
using namespace std;
int main()
{
    double average;
    int n=1,sum=0,count=1;
    cout <<"Enter n of numbers\n";
    cin>>n;
     
    for(int i=1;i<=n;i++)
    {
        int num;
        cout<<"Enter num "<<i<<"\n";
        cin>>num;
          if (num%2 !=0)
         {sum += num;
          ++count;}
    }
    average =sum/count;
    cout<<average;    
}
