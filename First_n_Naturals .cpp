//Printing first 'n' Natural Numbers using While loop in C++ .
#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int last ,i=1;

    cout<<"\n\n\n\n\n\n";

    cout<<"\n\tEnter No. upto which you want Sequence :\t";
    cin>>last;

    cout<<"\n\n\n";

    while(i<=last)
    {
        cout<<i<<"\n";
        i++;
    }
    
    cout<<"\n\n\n\n";

    return 0;
}
// Code by - Mayborg