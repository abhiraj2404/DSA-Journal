

// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();

            // Best possible time for any approach is O(n^2) as that is the minimum time required to traverse a 2D matrix

            // OPTIMAL APPROACH - O(1) space
            // Instead of extra space for sets, use the 0th row and column of the matrix
        int col0 = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        if (matrix[0][0] == 0)
            for (int i = 1; i < n; i++)
                matrix[0][i] = 0;

        if (col0 == 0)
            for (int i = 0; i < m; i++)
                matrix[i][0] = 0;

        // BETTER APPROACH - O(M + N) space
        // Use a row and column set to store in which rows and columns 0s occur 

        // unordered_set<int> rows, columns;
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (matrix[i][j] == 0)
        //         {
        //             rows.insert(i);
        //             columns.insert(j);
        //         }
        //     }
        // }

        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (rows.find(i) != rows.end() || columns.find(j) != columns.end())
        //         {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
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
