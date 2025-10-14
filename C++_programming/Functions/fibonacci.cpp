#include <iostream>
using namespace std;

void fib(int n)
{
    int t1=0,t2=1,term;
    cout<<t1<<" "<<t2<<" ";

    for(int i=3;i<=n;i++)
    {
        term=t1+t2;
        t1=t2;
        t2=term;
        cout<<term<<" ";
    }
    return;
}

int main()
{
    int num;
    cout<<"enter no. of terms\n";
    cin>>num;

    fib(num);

    return 0;
}

