#include <iostream>
using namespace std;

int fact(int n)
{
    int product=1;
    for(int i=2;i<=n;i++)
    product*=i;
    return product;
}

int main()
{
    int n,r;
    cout<<"enter value of n and r \n";
    cin>>n>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

    return 0;
}