#include <iostream>             //every term in pascal's triangle is n C r ..... where n=row no. &  r=column no.
using namespace std;

int fact(int n)
{
    int product=1;
    for(int i=2;i<=n;i++)
    product*=i;
    return product;
}

int nCr(int n,int r)
{
    int coeff=fact(n)/(fact(r)*fact(n-r));
    return coeff;
}

int main()
{
    int n;
    cout<<"enter no. of rows \n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<nCr(i,j)<<" ";
        cout<<endl;
    }

    return 0;
}