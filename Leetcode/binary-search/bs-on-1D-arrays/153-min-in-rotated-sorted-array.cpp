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
    int findMin(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[low] < nums[high]) // array is in sorted order
                return nums[low];

            if (nums[low] <= nums[mid])
                low = mid + 1;
            else
                high = mid;
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
    vector<int> input = {1, 2};

    int result = sol.findMin(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
