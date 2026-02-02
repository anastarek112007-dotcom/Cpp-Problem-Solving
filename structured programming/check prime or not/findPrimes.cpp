#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int cNum;
    int count=0;
    cout<<"Enter number to find all the primes less than it\n";
    cin >>cNum;
     
    for (int i=2;i<cNum;i++)
    {bool isPrime = true;
       for(int j=2;j<i;j++)
        {
            if (i%j==0)
            {isPrime=false;
            break;}
            
        }
        if (isPrime)
        {cout<<setw(3)<<i<<": "<<"is a prime number \n";
        count++;}
    }
    cout<<setw(3)<<count<<": "<<"prime before your number \n";

    return 0;
}