#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int temp;
    int arr[]={53,44,33,35,432};
    
    cout <<"******elements of array before editing******"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    for (int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
         {
            if (arr[j]>arr[j+1])
             {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
         }
    }

    cout <<"******elements of array after editing******"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    
     
}