// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
    int left = start, right = end;
    cout << left << right << endl;
    while (left < right)
    {
        // swap
        swap(arr[left], arr[right]);

        // update values
        left++;
        right--;
    }
}

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        int newK = k % n;
        // reverse whole array
        reverse(nums, 0, n - 1);

        // reverse o to k
        reverse(nums, 0, newK - 1);

        // reverse k to end
        reverse(nums, newK, n - 1);
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    // string input = "XIV";
    vector<int> input = {1};

    cout << "Testing with input: " << endl;
    sol.rotate(input, 3);

    // cout << "Result: " << result << endl;
    cout << " , finalvec: ";
    for (auto i : input)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
