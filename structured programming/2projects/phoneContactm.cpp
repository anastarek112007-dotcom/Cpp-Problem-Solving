#include <iostream>
#include <string>
using namespace std;

void addNum(int num[],int index);
void addName(string name[],int index);
void deleteContact(string names[],int nums[],int &size);
void searchByName(string names[],int nums[],int &size);
void displaySorted(string names[], int nums[], int size);


int main()
{
    int choise;
    int i=0;
    string names[100];
    string name;
    int nums[100];
    do
    {
        cout<<"choose number (1-5) \n";
        cout<<"\t 1.Add contact \n";
        cout<<"\t 2.Delete \n";
        cout<<"\t 3.Search by name \n";
        cout<<"\t 4.Display sorted \n";
        cout<<"\t 5.Exit \n";
        cin>>choise;


        switch (choise)
      {
        case 1:
        {
            if(i<100)
            {
                addName(names,i);
                addNum(nums,i);
                i++;
                cout << "Contact Saved!\n\n";
            }
            else cout<<"Storge is full";
            break;
        }
    
        case 2:
        {
            deleteContact(names,nums,i);
            break;
        }
        case 3:
        {
            searchByName(names, nums, i);
            break;
        }
        case 4: 
            displaySorted(names, nums, i);
            break;
      }
        
    } while (choise!=5);

    return 0;

}
void addNum(int num[],int index)
{
    cout <<"Enter the number: ";
    cin>>num[index];
}
void addName(string name[],int index) 
{
    cout <<"Enter the name: ";
    cin>>name[index];
}
void deleteContact(string names[],int nums[],int &size)

{
    string name;
    int index = -1;
    
    cout <<"Enter contact name that you want to delete \n";
    cin>>name;

    for (int i=0;i<size;i++)
    {
        if (name==names[i])
        {
            index=i;
            break;
        }
    }
    if (index != -1) 
    {
        for (int i = index; i < size - 1; i++)
        {
            names[i] = names[i + 1]; 
            nums[i] = nums[i + 1]; 
        }
        size--;
        
    }
    
}
void searchByName(string names[],int nums[],int &size)
{
    string name;
    cout <<"Enter the name that you want to search for: ";
    cin>>name;
    int index =-1;

    for (int i=0;i<size;i++)
     if (name == names[i])
       {
        index = i;
        cout <<"Founded \n"
        <<"Name: "<<names[i]<<"\n"
        <<"Phone Number: "<<nums[i]<<"\n";
        break;
       }
    if(index == -1)
    {
        cout << "Not Found!\n";
    }
}
void displaySorted(string names[], int nums[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
        
            if(names[j] > names[j+1]) 
            {
                
                string tempName = names[j];
                names[j] = names[j+1];
                names[j+1] = tempName;
                
                
                int tempNum = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tempNum;
            }
        }
    }
    
    cout << "\n--- Sorted Contact List ---\n";
    for(int k = 0; k < size; k++)
    {
        cout << k+1 << ". " << names[k] << " - " << nums[k] << "\n";
    }
    
}
