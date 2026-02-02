#include <iostream>
using namespace std;
int main ()
{
    int size=5;
    int index;
    int element;
    int arr[size]={10,20,30,40,50};
    cout <<"enter the element that you want to delete \n";
    cin>>element;

    cout<<"enter the array before editing \n";
    for(int i=0;i<size;i++)
    cout <<arr[i]<<" ";

    for (int i=0;i<size;i++)
    {
        if (element=arr[i])
          index=i;
    }
    for (int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }


    cout<<"enter the array after editing \n";

    for(int i=0;i<size-1;i++)
    cout <<arr[i]<<" ";
}