
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
    int upperBound(vector<int> &nums, int x)
    {
        // STL has an inbuild function for lowerbound - lower_bound
        int n = nums.size();
        int low = 0, high = n - 1, ans = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] >= x)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
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
    vector<int> input = {1, 2, 2, 3, 25, 25, 25};

    int result = sol.upperBound(input, 2);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
