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
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> ans;
        map<int, int> hashmap;

        // HASHMAP - O(n log n)
        for (int i = 0; i < n; i++)
        {
            hashmap[nums[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            int tofind = target - nums[i];
            auto index = hashmap.find(tofind);
            if (index != hashmap.end() && index->second != i)
            {
                ans.push_back(i);
                ans.push_back(index->second);
                return ans;
            }
        }

        // 

        // BRUTE FORCE - O(n^2)
        // for( int i = 0;i < n;i++){
        //     int reqNum =  target - nums[i];
        //     for( int j = i+1; j< n;j++) {
        //         if(reqNum == nums[j]) {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        //     if(ans.size() == 2)
        //     break;
        // }
        return ans;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {3, 2, 4};

    vector<int> result = sol.twoSum(input, 6);

    // cout << "Result: " << result << endl;
    cout << "finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
