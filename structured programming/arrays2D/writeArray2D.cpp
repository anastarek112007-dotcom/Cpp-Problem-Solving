#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int rows=3,columns=4;
    int points[rows][columns]=
    {{1,1,2,5},
    {2,3,4,5},
    {4,4,3,7}};
    for (int i=0;i<rows;i++)
     {
        for (int j=0;j<columns;j++)
        {
            cout<<points[i][j]<<" ";
        }
     cout<<endl;
     }
    return 0;
}