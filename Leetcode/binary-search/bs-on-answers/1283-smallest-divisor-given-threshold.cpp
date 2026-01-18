

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <cmath>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int calcSum(vector<int> &nums, int mid)
    {
        int sum = 0;
        for (auto i : nums)
        {
            int a = ceil(i / double(mid));
            sum += a;
        }
        return sum;
    };

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int maxi = INT_MIN;
        for (auto i : nums)
        {
            maxi = max(maxi, i);
        }

        int low = 1, high = maxi, finalans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int sum = calcSum(nums, mid);
            if (sum <= threshold)
            {
                finalans = min(finalans, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return finalans;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {44, 22, 33, 11, 1};

    int result = sol.smallestDivisor(input, 5);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
