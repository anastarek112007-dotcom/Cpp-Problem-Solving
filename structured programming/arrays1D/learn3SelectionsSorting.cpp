#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={53,44,33,35,432};
    int size=5;

    cout << "not Sorted array: \n";
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout<<endl;
    

    for (int i=0;i<size-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        swap(arr[min_idx],arr[i]);
    }

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}