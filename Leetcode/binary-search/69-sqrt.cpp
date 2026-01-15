

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 0, high = x;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if ((mid * mid) == x)
            {
                return mid;
            }
            else if (x > (mid * mid))
                low = mid + 1;
            else
                high = mid - 1;
        }

        return min(low, high);
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    int input = 9;
    // vector<int> input = {3,4,1,2};

    int result = sol.mySqrt(20);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
