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
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size(), sum = 0, count = 0;
        map<int, int> prefixsum;
        prefixsum[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];

            int tofind = sum - k;
            count = count + prefixsum[tofind];

            prefixsum[sum] = prefixsum[sum] + 1;
            cout << "i=" << i << ", count=" << count << endl;
        }

        return count;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {0, 0};

    int result = sol.subarraySum(input, 0);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
