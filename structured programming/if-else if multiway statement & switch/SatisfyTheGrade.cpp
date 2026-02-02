#include <iostream> 
using namespace std;
int main()
{
    int score;
    cout<<"Enter score (0-100)\n";
    cin>>score;

    if(score >=0 && score<=100)
    if(score>=90)
    cout<<"Your Grade (A)\n";
    else if(score >=80)
    cout<<"Your Grade (B)\n";
    else if (score >= 70)
    cout<<"Your Grade (C)\n";
    else if (score>=60)
    cout<<"Your Grade (D)\n";
    else cout<<"Your Grade (F)\n";
    return 0;
}