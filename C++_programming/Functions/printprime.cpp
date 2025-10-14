#include <iostream>
using namespace std;

void printprime(int p)
{
    int i;
    for(i=2;i<p;i++)                           // can also be used "for(i=2;i<=sqrt(p);i++)"  
    {                                          // loop kam baar execute hoga and we save time
        if(p%i==0)                             // agr koi no. apne square root tak ya usse chote no. se divisible nhi hai toh, apne sqrt se bade no. se toh divisible nhi hi hoga
        break;
        else
        continue;
    }
    if(i==p)
    cout<<p<<"  ";
    return;
}

int main()
{
    int n1,n2;
    cout<<"enter starting and ending limit\n";
    cin>>n1>>n2;

    for(int i=n1;i<=n2;i++)
    printprime(i);

    return 0;
}