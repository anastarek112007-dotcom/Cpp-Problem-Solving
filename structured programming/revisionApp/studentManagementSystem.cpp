#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

void sortFunction(double grades[][3],double precentage[],double totalScore[],char letterGrades[],int size,int size_sub,int ids[])
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (totalScore[j]>totalScore[i])
            {
                swap(totalScore[j],totalScore[i]);
                swap(precentage[j],precentage[i]);
                swap(letterGrades[j],letterGrades[i]);
                swap(ids[i],ids[j]);
             for (int k=0;k<size_sub;k++)
             {
                swap(grades[i][k],grades[j][k]);
             }
                
            }

        }
    }
}
int main()
{
    const int size=3,size_sub=3;
    int ids[size];
    double grades[size][size_sub];
    int sum=0;
    double precentage[size];
    double totalScores[size];
    char letterGrade[size];
    for (int i=0;i<size;i++)
    {
        cout <<"Enter ID of student: "<<i+1<<endl;
        cin >>ids[i];
        cout<<"Enter studet grades \n";
        for (int j=0;j<size_sub;j++)
        {
            do
            {
                cout<<"grade: "<<j+1<<endl;
                cin >>grades[i][j];
                if (grades[i][j]<0||grades[i][j]>100)
                cout <<"invalid grade reEnter it \n";
            } while (grades[i][j]<0||grades[i][j]>100);
        }
    }
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size_sub;j++)
        {
            sum +=grades[i][j];
        }
        totalScores[i]=sum;
        precentage[i]=(sum/300.0)*100;
        if (precentage[i]>=85)
        letterGrade[i]= 'A';
        else if (precentage[i]>=70)
        letterGrade[i]= 'B';
        else if (precentage[i]>=60)
        letterGrade[i]= 'C';
        else
        letterGrade[i]= 'F';
        sum=0;
        
    }
    sortFunction(grades, precentage, totalScores, letterGrade, size, size_sub, ids);
    cout<<"ID\t\tTotalScore\t\tPrecentge\t\tGrade\n";
    for (int i=0;i<size;i++)
    {
        cout << fixed << setprecision(2)<<ids[i]<<"\t\t"<<totalScores[i]<<"\t\t\t"<<precentage[i]<<"\t\t\t"<<letterGrade[i]<<endl;
    }


    return 0;
}