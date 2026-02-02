#include <iostream>

using namespace std;

int main()
{
    /*
         Data Types
    string=  words                           24byte
    int=     integers                        4bytes
    short=   short integers                  2bytes
    double=  integers&rational numbers       8bytes can have fifteen digits after decimal point
    float=   short integers&rational numbers 4bytes can have seven digits after decimal point
    char=    characters                      1byte
    unsigned=positive integers               4bytes
    */
    int i=5,j=100,k;
    cout<<"enter 2 values to sum\n";
    cin>>i>>j;
    k=i+j;
    cout<<"ans= "<<k<<"\n";

    return 0;
}
