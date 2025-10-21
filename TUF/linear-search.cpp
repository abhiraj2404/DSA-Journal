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
    int linearSearch(vector<int> &nums, int target)
    {
        int found = -1, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                found = i;
                break;
            }
        }
        return found;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {3, 4, 1, 2};

    cout << "Testing with input: " << endl;
    int result = sol.linearSearch(input, 1);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    // {
    //     cout << i << " , ";
    // };
    // cout << endl;

    return 0;
}
