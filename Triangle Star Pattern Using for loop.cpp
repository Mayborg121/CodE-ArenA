// Triangle pattern using "for loop" in C++
#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int lines ;

    cout<<"\n\n\n\n\n\n";

    cout<<"\n\tEnter Height of Triangle :\t";
    cin>>lines;

    for(int i=0;i<=lines;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*\t";
        }
        cout<<"\n\n";
    }
    
    cout<<"\n\n\n\n";

    return 0;
}
// Code by - Mayborg