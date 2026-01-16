
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
    int singleNonDuplicate(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;
        if (low == high)
            return nums[low];
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            else if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid + 1])
                    low = mid;
                else
                    high = mid;
            }
            else
            {
                if (nums[mid] != nums[mid + 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return nums[low];
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {3, 3, 7, 7, 10, 11, 11};

    int result = sol.singleNonDuplicate(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
