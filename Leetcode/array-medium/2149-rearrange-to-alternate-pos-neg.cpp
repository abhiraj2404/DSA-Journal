

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
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos = pos + 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg = neg + 2;
            }
        }
        return ans;
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
