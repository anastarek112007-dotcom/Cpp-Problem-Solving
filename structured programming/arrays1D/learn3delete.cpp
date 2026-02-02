#include <iostream>
using namespace std;
int main ()
{
    int size=5;
    int index=-1;
    int element;
    int arr[]={10,20,30,40,50};
    cout <<"enter the element that you want to delete \n";
    cin>>element;

    cout<<"the array before editing \n";
    for(int i=0;i<size;i++)
    cout <<arr[i]<<" ";

    for (int i=0;i<size;i++)
    {
        if (element==arr[i])
          {index=i;
          break;}
    }
    if (index != -1) 
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1]; 
        }
        size--;
    }

    cout<<"the array after editing \n";

    for(int i=0;i<size;i++)
    cout <<arr[i]<<" ";

}