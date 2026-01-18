
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
    bool checkbouquet(vector<int> &bloomDay, int currD, int m, int k)
    {
        int count = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= currD)
            {
                count++;
                if (count == k)
                {
                    cout << "count=" << count;
                    count = 0;
                    m = m - 1;
                    if (m == 0)
                        break;
                }
            }
            else
                count = 0;
        }

        if (m == 0)
            return true;
        else
            return false;
    };

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int mini = INT_MAX, maxi = INT_MIN;

        // array size is smaller than required number of flowers
        if (bloomDay.size() < m * k)
            return -1;

        for (auto i : bloomDay)
        {
            mini = min(mini, i);
            maxi = max(maxi, i);
        }

        int low = mini, high = maxi, finalans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (checkbouquet(bloomDay, mid, m, k))
            {
                high = mid - 1;
                finalans = min(finalans, mid);
            }
            else
            {
                low = mid + 1;
            }
        }

        return finalans;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1000000000, 1000000000};

    int result = sol.minDays(input, 1, 1);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
