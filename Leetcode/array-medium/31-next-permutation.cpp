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
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {3, 4, 1, 2};

    sol.nextPermutation(input);

    // cout << "Result: " << result << endl;
    // cout << " , finalvec: ";
    for (auto i : input)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
