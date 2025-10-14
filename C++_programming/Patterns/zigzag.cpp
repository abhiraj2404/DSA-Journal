#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of characters\n";
    cin>>n;

    for(int i=1;i<=3;i++)                              //no of rows are fixed
    {
        for(int j=1;j<=n;j++)
        {
            switch (i)
            {
                case 1:                                   //first line
                if((j+1)%4==0)
                cout<<"*";
                else
                cout<<" ";
                break;

                case 2:                                  //second line
                if(j%2==0)
                cout<<"*";
                else
                cout<<" ";
                break;

                case 3:                                //third line
                if((j-1)%4==0)
                cout<<"*";
                else
                cout<<" ";
                break;


            }
        }
        cout<<endl;
    }



    
    return 0;
}