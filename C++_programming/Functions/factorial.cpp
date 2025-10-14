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
    int num;
    cout<<"enter a no.\n";
    cin>>num;

    cout<<fact(num);
}