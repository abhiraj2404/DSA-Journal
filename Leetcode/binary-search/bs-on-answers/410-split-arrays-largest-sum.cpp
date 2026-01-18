

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
    bool isSplitPossible(vector<int> &nums, int k, int mid)
    {
        int index = 0, sum = 0;
        while (index < nums.size())
        {
            sum += nums[index];
            if (sum > mid)
            {
                k--;
                sum = 0;
            }
            else if (sum == mid)
            {
                k--;
                sum = 0;
                index++;
            }
            else
            {
                index++;
            }
        }

        if (sum <= mid && sum != 0)
            k--;

        if (k >= 0)
            return true;
        else
            return false;
    };
    int splitArray(vector<int> &nums, int k)
    {
        int sum = 0, maxi = INT_MIN;
        for (auto i : nums)
        {
            sum += i;
            maxi = max(maxi, i);
        }

        int low = maxi, high = sum, finalans = sum;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            cout << ", mid=" << mid;
            bool splitPossible = isSplitPossible(nums, k, mid);
            cout << ", splitpossible=" << splitPossible;
            if (splitPossible)
            {
                finalans = min(finalans, mid);
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            cout << endl;
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
    vector<int> input = {0, 0};

    int result = sol.splitArray(input, 1);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
