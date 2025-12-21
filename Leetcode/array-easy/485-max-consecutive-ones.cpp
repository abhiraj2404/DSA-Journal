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
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size(), count = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                if (count > max)
                    max = count;

                count = 0;
            }
        }
        if (count > max)
            max = count;

        return max;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1};

    cout << "Testing with input: " << endl;
    int result = sol.findMaxConsecutiveOnes(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    // {
    //     cout << i << " , ";
    // };
    // cout << endl;

    return 0;
}
