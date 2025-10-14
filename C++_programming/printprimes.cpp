#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE // to use input output in vs code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b; // Range btw which you want to print primes

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
            cout << num << endl;
    }

    return 0;
}