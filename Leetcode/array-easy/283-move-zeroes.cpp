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
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int firstZero;
        bool foundFirstZero = false;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == 0)
            {
                firstZero = j;
                foundFirstZero = true;
                break;
            }
        }

        if (foundFirstZero)
        {
            for (int i = firstZero + 1; i < n; i++)
            {
                if (nums[i] != 0)
                {
                    // swap
                    swap(nums[i], nums[firstZero]);

                    // increase firstzero
                    firstZero++;
                }
            }
        }
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {0, 3, 0, 4, 0, 1, 2};

    cout << "Testing with input: " << endl;
    sol.moveZeroes(input);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : input)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
