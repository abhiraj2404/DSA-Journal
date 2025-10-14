#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"input no. of rows and columns \n";
    cin>>row>>col;

    for(int i=1;i<=row;i++)             //loop for rows
    {
        int j;
        for(j=1;j<=col;j++)             //loop for columns
        {
            if(i==1||i==row || j==1||j==col)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}