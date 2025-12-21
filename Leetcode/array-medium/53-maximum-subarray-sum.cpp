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
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size(), sum = 0, maxi = INT_MIN, maxistart = 0, maxiend, start;

        // CALLED KADANE'S ALGORITHM (only carry forward positive SUM. If SUM becomes negative, reset to 0)
        for (int i = 0; i < n; i++)
        {
            // if (sum == 0)
            //     start = i;
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
                // maxistart = start;
                // maxiend = i;
            }

            if (sum < 0)
            {
                sum = 0;
            }
        }
        // cout << maxistart << "," << maxiend << endl;

        return maxi;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {-2};

    int result = sol.maxSubArray(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
