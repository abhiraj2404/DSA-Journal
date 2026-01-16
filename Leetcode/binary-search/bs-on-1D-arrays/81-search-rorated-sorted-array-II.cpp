

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
    bool search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return true;
            else if (nums[low] <= nums[mid]) // left sorted 
            {
                if (nums[low] == nums[mid] && low != mid)
                {
                    int lowr = low;
                    while (lowr < mid && nums[lowr + 1] == nums[mid])
                        lowr++;

                    if (lowr == mid)
                        low = mid + 1; // if lowr reaches mid, then the left side is the repeated side
                    else
                        high = mid - 1; // right side is the repeated side
                }
                else // right sorted
                {
                    if (nums[low] <= target && target <= nums[mid])
                        high = mid - 1;
                    else
                        low = mid + 1;
                }
            }

            else
            {
                if (nums[mid] <= target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return false;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {2,2,2,0,0,1};

    bool result = sol.search(input, 3);
    cout << boolalpha;
    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
