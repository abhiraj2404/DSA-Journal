

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <cmath>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
     
        int n = piles.size(), maxi = INT_MIN;
        for (auto i : piles)
        {
            maxi = max(i, maxi);
        }

        int ans = INT_MAX;
        int low = 1, high = maxi;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                int time = ceil(piles[i] / double(mid));
                sum += time;
            }
            if (sum <= h)
            {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return ans;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {5};

    int result = sol.minEatingSpeed(input, 4);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
