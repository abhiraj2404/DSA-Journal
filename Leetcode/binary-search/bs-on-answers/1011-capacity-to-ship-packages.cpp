

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
    int calcDays(vector<int> &weights, int capacity)
    {
        int index = 0, sum = 0, reqdays = 0;
        while (index < weights.size())
        {
            sum += weights[index];
            if (sum > capacity)
            {
                reqdays++;
                sum = 0;
            }
            else if (sum == capacity)
            {
                reqdays++;
                sum = 0;
                index++;
            }
            else
            {
                index++;
            }
        }

        cout << reqdays;
        if (sum <= capacity && sum != 0)
            reqdays++;
        return reqdays;
    };
    int shipWithinDays(vector<int> &weights, int days)
    {
        int maxi = INT_MIN, sum = 0;
        for (auto i : weights)
        {
            maxi = max(maxi, i);
            sum += i;
        }

        int low = maxi, high = sum, finalans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int reqDays = calcDays(weights, mid);
            if (reqDays <= days)
            {
                finalans = min(finalans, mid);
                high = mid - 1;
            }
            else
                low = mid + 1;
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
    vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = sol.shipWithinDays(input, 1);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
