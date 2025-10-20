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
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int currNum = nums[0], arrPos = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > currNum)
            {
                currNum = nums[i];
                // swap with array Position
                int temp = nums[arrPos];
                nums[arrPos] = nums[i];
                nums[i] = temp;

                arrPos++;
            }
        }
        cout << " , finalvec: ";
        for (auto i : nums)
        {
            cout << i << "  ";
        };
        cout << endl;
        return arrPos;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1, 1, 2, 3, 4, 4, 5, 5, 5};

    cout << "Testing with input: " << endl;
    int result = sol.removeDuplicates(input);

    cout << "Result: " << result << endl;

    return 0;
}
