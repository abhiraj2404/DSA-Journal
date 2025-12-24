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
        int n = nums.size(), len = 0;
        long long sum = 0;
        map<int, int> prefixmap;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            // prefixmap[sum] = i;      (earlier it was this line)

            // (now this below) if check has been added for the case where zeroes are also present in the array 
            if (prefixmap.find(sum) == prefixmap.end())     
            {
                prefixmap[sum] = i;
            }
            // for (auto i : prefixmap)
            // {
            //     cout << i.first << ":" << i.second << ",";
            // }
            if (sum == k)
            {
                len = max(i + 1, len);
            }
            if (sum > k)
            {
                cout << "sum=" << sum;
                auto it = prefixmap.find(sum - k);
                if (it != prefixmap.end())
                {
                    cout << ", prefixsum=" << sum - k;
                    len = max(len, i - prefixmap[sum - k]);
                }
            }
            cout << ", len=" << len << endl;
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
    vector<int> input = {2, 0, 0, 0, 0, 3};

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
