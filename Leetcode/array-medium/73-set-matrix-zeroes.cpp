

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
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<vector<int>> input = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    sol.setZeroes(input);

    // cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    int m = input.size();
    int n = input[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << input[i][j] << ",";
        }
        cout << endl;
    };
    cout << endl;

    return 0;
}
