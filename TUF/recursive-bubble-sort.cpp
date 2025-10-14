// Output command - g++ -o output 0-main-structure.cpp && ./output

#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void recursiveBubbleSort(vector<int> &arr, int end)
{
    if (end == 0)
        return;

    for (int i = 0; i <= end - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // swap
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursiveBubbleSort(arr, end - 1);
}

class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        int n = nums.size();
        recursiveBubbleSort(nums, n - 1);
        return nums;
    }
};

int main()
{
    // create object of whatever class is given above
    Solution sol;

    // Test with some input
    vector<int> input = {10, 20, 1, 5, 3, 55, 23, 25};

    cout << "Testing with input: " << endl;
    vector<int> result = sol.bubbleSort(input);

    cout << " , finalvec: ";
    for (auto i : result)
    {
        cout << i << " , ";
    };
    cout << endl;

    return 0;
}
