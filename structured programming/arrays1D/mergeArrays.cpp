#include <iostream>
using namespace std;
int main()
{
    int size1=4,
    arr1[]={1,3,5,7},
    
    size2=7,
    arr2[]={2,4,6,8,9,10,11},

    size3=size1+size2,
    merged[size3],
    i=0,k=0,j=0;

    while (i<size1&&j<size2)
    {
      if(arr1[i]<arr2[j])
      {
        merged[k]=arr1[i];
        i++;
      }
      else 
      {
        merged[k]=arr2[j];
        j++;
      }
      k++;

    }
    while (i<size1)
    {
      merged[k]=arr1[i];
      i++;k++;
    }
    while (j<size2)
    {
      merged[k]=arr2[j];
      j++;k++;
    }

    cout<<"***merged array*** \n";
    for(int i=0;i<size3;i++)
    {
      cout<<merged[i]<<" ";
    }

    return 0;

}