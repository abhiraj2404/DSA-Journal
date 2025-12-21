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
    void sortColors(vector<int> &nums)
    {

        // SIMPLE SOLUTION - send 0's to left and send 2's to right
        int l = 0;
        int r = nums.size() - 1;
        int i = 0;
        while (i <= r)
        {

            if (nums[i] == 0)
            {
                swap(nums[i], nums[l]);
                ++l;
            }
            if (nums[i] == 2)
            {
                swap(nums[i], nums[r]);
                --r;
                continue;
            }
            ++i;
        }

        // KEEP TRACK OF LAST INDEX OF ALL 3 - O(N) but very complex solution
        // int n = nums.size(), zerokaindex = -1, onekaindex = -1, twokaindex = -1;
        // for (int i = 0; i < n; i++)
        // {
        //     if (nums[i] == 0)
        //     {
        //         zerokaindex++; // -1 to 0
        //         swap(nums[i], nums[zerokaindex]);
        //         onekaindex++;
        //         if (nums[i] == 1 && i != onekaindex)
        //             swap(nums[i], nums[onekaindex]);
        //         twokaindex++;
        //     }
        //     else if (nums[i] == 1)
        //     {
        //         onekaindex++;
        //         swap(nums[i], nums[onekaindex]);
        //         twokaindex++;
        //     }
        //     else if (nums[i] == 2)
        //     {
        //         twokaindex++;
        //     }
        // }
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {0, 0, 2, 1, 1, 0, 2, 2, 2, 1, 1, 0, 0};

    sol.sortColors(input);

    cout << " , finalvec: ";
    for (auto i : input)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
