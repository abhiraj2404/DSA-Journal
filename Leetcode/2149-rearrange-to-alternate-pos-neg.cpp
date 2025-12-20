

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
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        int countp = 0, countn = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "num[i]=" << nums[i] << " ";
            if (nums[i] > 0)
            {
                countp++;
                if (nums[2 * countp - 2] < 0)
                    swap(nums[2 * countp - 2], nums[i]);
            }
            else
            {
                countn++;
                if (nums[2 * countn - 1] > 0)
                {
                    swap(nums[2 * countn - 1], nums[i]);
                    cout << "inside negative if";
                }
            }

            for (auto i : nums)
            {
                cout << i << " , ";
            };
            cout << endl;
        }

        return nums;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {3, 1, 8, -2, -5, 2, -4, -7};

    vector<int> result = sol.rearrangeArray(input);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
