

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
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        printf("low= %d , high=%d  ", low, high);
        return low;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1, 2, 7, 19, 32, 56, 76, 85, 105};

    int result = sol.searchInsert(input, 55);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
