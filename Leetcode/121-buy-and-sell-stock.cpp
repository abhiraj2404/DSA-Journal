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
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int buy = INT_MAX, maxp = 0;
        for (int i = 0; i < n; i++)
        {
            if (prices[i] < buy)
                buy = prices[i];

            if (prices[i] > buy)
                maxp = max(maxp, prices[i] - buy);
        }
        return maxp;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {7, 1, 5, 3, 6, 4};

    int result = sol.maxProfit(input);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
