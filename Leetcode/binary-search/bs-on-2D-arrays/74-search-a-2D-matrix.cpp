
// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        int low = 1, high = rows * cols;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            cout << "low=" << low;
            cout << ", high=" << high;
            cout << ", mid=" << mid;
            int trow = mid % cols == 0 ? (mid / cols) - 1 : mid / cols;
            int tcol = mid % cols == 0 ? cols - 1 : (mid % cols) - 1;
            printf("Trow=%d , tcols=%d", trow, tcol);
            cout << ", mid elememt=" << matrix[trow][tcol];
            if (matrix[trow][tcol] == target)
                return true;
            else if (matrix[trow][tcol] > target)
                high = mid - 1;
            else
                low = mid + 1;

            cout << endl;
        }

        return false;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<vector<int>> input = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    int result = sol.searchMatrix(input, 60);

    cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    // for (auto i : result)
    //     {
    //         cout << i << " , ";
    //     };
    // cout << endl;

    return 0;
}
