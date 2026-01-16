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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        vector<int> ans(2, -1);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                int lowr = mid, highr = mid;
                while (lowr - 1 >= 0 && nums[lowr - 1] == target)
                    lowr--;
                while (highr + 1 < nums.size() && nums[highr + 1] == target)
                    highr++;

                return {lowr, highr};
            }
            else if (target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
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
    vector<int> input = {1, 5, 7, 7, 8, 8, 8, 10};

    vector<int> result = sol.searchRange(input, 8);

    // cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
