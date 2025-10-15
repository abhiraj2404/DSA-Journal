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
    int secondLargestElement(vector<int> &nums)
    {
        // your code goes here
        int n = nums.size();
        int l = INT_MIN, sl;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > l)
            {
                sl = l;
                l = nums[i];
            }
            else if (nums[i] > sl)
            {
                sl = nums[i];
            }
        }

        if (l == sl)
            return -1;
        else
            return sl;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {10, 10, 6, 7, 2};

    cout << "Testing with input: " << endl;
    int result = sol.secondLargestElement(input);

    cout << "Result: " << result << endl;

    return 0;
}
