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
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans;
        int left = 0, top = 0, right = m - 1, bottom = n - 1;
        while (top <= bottom && left <= right)
        {
            // 4 loops for 4 boundaries
            // right to left
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // left to right
            if (top <= bottom)
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
            bottom--;

            if (left <= right)
                // bottom to top
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
            left++;
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
    vector<vector<int>> input = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> result = sol.spiralOrder(input);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
