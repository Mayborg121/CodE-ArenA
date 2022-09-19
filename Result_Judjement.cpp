//Simple program using if-else statements.Result Judgement Code

#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int percentage ;

    cout<<"\n\n\n\n\n\n";

    cout<<"\n\tEnter your Percentage :\t";
    cin>>percentage;

    if(percentage>=0 && percentage<=100)
        {
            if(percentage>=45)
            {
                cout<<"\n--** Congratulations! You Succeeded **--";
            }
            else
            {
                cout<<"\n\t--** Sorry You Have Failed !! **--";
            }
        }
    else
    {
        cout<<"\n\tEnter Valid Score !!! ";
    }

    cout<<"\n\n\n\n";

    return 0;
}
// Code by - Mayborg