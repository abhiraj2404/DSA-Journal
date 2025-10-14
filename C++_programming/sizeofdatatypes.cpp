#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE // to use input output in vs code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    double a;
    cout << "size of double " << sizeof(a) << endl;

    int b = 'a';
    cout << "b=" << b << endl
         << "size of int " << sizeof(b) << endl;

    float c;
    cout << "size of float " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    int unsigned e = -2, f = 2; // type modifier
    cout << e << endl
         << f << endl;

    long int li; // long and short
    short int si;
    cout << "size of short " << sizeof(si) << endl;
    cout << "size of long " << sizeof(li) << endl; // PROBLEM IN SIZE OF LONG

    return 0;
}