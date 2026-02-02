#include <iostream>
#include <string>
using namespace std;
int main ()
{
    const int size=4;
    int arr[size];
    int sizeOfArr;
    
    
    cout<<"enter first element: ";
    cin>>arr[0];
    cout<<"enter sec element: ";
    cin>>arr[1];
    cout<<"enter third element: ";
    cin>>arr[2];
    cout<<"enter fourth element: ";
    cin>>arr[3];
    sizeOfArr=sizeof(arr)/sizeof(arr[0]);

    cout <<"*****array elememts***** \n";
    cout <<"arr[0]: "<<arr[0]<<endl;
    cout <<"arr[1]: "<<arr[1]<<endl;
    cout <<"arr[2]: "<<arr[2]<<endl;
    cout <<"arr[3]: "<<arr[3]<<endl;
    cout <<"Sizeofarr: "<<sizeOfArr<<endl;


    return 0;

}