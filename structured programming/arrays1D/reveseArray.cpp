#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int arr[5]={1,4,6,3,5};
    for (int i=0;i<=5/2;i++)
    {
        swap(arr[i],arr[5-i-1]);
    }
    cout<< "array \n";
    for (int i=0;i<5;i++)
    {
        cout <<arr[i]<<" ";
    }
}