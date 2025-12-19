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
    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size(), len = 0, right = 0, left = 0;
        long long sum = nums[0];
        while (right < n)
        {

            // keep moving right pointer forward
            if (right < n)
                sum = sum + nums[right];
            right++;

            // check if sum is equal to k 
            if (sum == k)
            {
                len = max(len, right - left + 1);
            }

            // sum is more than k , shrink (move left pointer)
            while (left <= right && sum > k)
            {
                sum = sum - nums[left];
                left++;
            }
        }
        return len;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};

    cout << "Testing with input: " << endl;
    int result = sol.longestSubarray(input, 3);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
