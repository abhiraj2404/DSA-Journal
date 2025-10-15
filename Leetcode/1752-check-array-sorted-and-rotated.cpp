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
    bool check(vector<int> &nums)
    {
        int n = nums.size(), count = 0;
        bool asc = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] <= nums[i + 1])
                continue;
            else
            {
                if (count == 0)
                {
                    count++;
                }
                else
                {
                    asc = false;
                    break;
                }
            }
        }

        // check last and first
        if (nums[n - 1] > nums[0])
            count++;

        if (count == 2)
            asc = false;

        return asc;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {1, 2, 8};

    cout << "Testing with input: " << endl;
    bool result = sol.check(input);

    cout << "Result: " << result << endl;

    return 0;
}
