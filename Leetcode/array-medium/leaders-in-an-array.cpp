

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        int n = nums.size(), maxi = INT_MIN;
        vector<int> leaderArray;
        
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > maxi)
                leaderArray.push_back(nums[i]);

            maxi = max(nums[i], maxi);
        }
        reverse(leaderArray.begin(), leaderArray.end());

        return leaderArray;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {-3, 4, 5, 1, -30, -10};

    vector<int> result = sol.leaders(input);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
