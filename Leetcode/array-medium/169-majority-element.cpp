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
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size(), maj, count = 0;

        // MOORE's VOTING ALGO - O(n) time, O(1) space    ---best
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
                maj = nums[i];

            if (nums[i] == maj)
                count++;
            else
                count--;
        }

        return maj;
        //  HASHMAP (BAD METHOD) - O(n) time, O(n) space    ---optimal
        //     pair<int, int> majority = {0, 0};
        //     map<int, int> hashmap;

        //     for (int i = 0; i < n; i++)
        //     {
        //         hashmap[nums[i]]++;
        //         if (hashmap[nums[i]] > majority.second)
        //         {
        //             majority.first = nums[i];
        //             majority.second = hashmap[nums[i]];
        //         }
        //         cout << majority.first << "," << majority.second << endl;
        //     }
        //     return majority.first;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3};

    int result = sol.majorityElement(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
