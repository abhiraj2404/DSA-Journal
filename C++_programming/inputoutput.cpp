#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE          //to use input output in vs code
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
    #endif 

    int amount1,amount2 ;
    cin>>amount1;
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<"sum \n"; 
    cout<<sum;

    return 0;

}