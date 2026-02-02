#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int size=5;
    int arr[size];
    int sizeOfArr;
    
    
    for (int i=0;i<size;i++)
    { 
        cout<<"enter element number: "<<i+1<<endl;
        cin>>arr[i];
    }
    sizeOfArr= sizeof(arr)/sizeof(arr[0]);

    cout <<"*****array elememts***** \n";
    for (int i=0;i<size;i++)
    {
        cout <<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    cout <<"Sizeofarr: "<<sizeOfArr<<endl;
    return 0;
}