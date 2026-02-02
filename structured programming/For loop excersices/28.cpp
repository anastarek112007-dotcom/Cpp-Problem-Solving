#include <iostream>
using namespace std;
int main()
{
    long long int num;
    cout<<"Enter number\n";
    cin>> num;
    bool is_prime =true;
    if (num<=0)
    { 
        is_prime=false;
    }
    else 
    {
        for(long long int i=2;i<=num/2;i++)
        {
            if(num%i == 0)
             is_prime=false;
          break; 
        }

    } 

    if (is_prime)
     cout<<num<<": "<<"is a prime\n";
    else cout<<num<<": "<<"is not a prime\n";


    return 0;

}