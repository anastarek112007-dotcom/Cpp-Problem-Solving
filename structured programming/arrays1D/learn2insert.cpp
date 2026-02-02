#include <iostream>
#include <string>
using namespace std;
int main ()
{
    //insert element to the array
    int size=4;
    int index=0;
    int element=0;
    int arr[100]={20,30,40,50};    
    
    
    cout <<"******elements of array before editing******"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the element to insert: ";
    cin>>element;

    cout<<"enter the index of the element: ";
    cin>>index;

    

    for (int i=size;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    size ++;
    
    cout <<"******elements of array after editing******"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}